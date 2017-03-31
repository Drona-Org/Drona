path_to_breach = '~/breach/';
path_to_experiments = '~/build-DronaForPX4-Desktop_Qt_5_8_0_GCC_64bit-Default/Src/Experiments/VerifyAPI/';
path_to_monitor = '~/DronaForPX4/Src/Lib/STLMonitor/Src/Matlab';

addpath(path_to_breach);
addpath(path_to_experiments);
addpath(path_to_monitor);

InitBreach;
hold on

syms x y z
vars = 'xyz';

hold on

robs = [];

n = 50; % number of experiments
for i=1:n
    
    traj_file_name = ['traj_' num2str(i-1) '.csv'];
    coord_file_name = ['coord_' num2str(i-1) '.csv'];
    
    traj = csvread(traj_file_name); traj = traj(:,1:end-1);
    coord = csvread(coord_file_name);
    
    source = coord(1:3);
    dest = coord(4:6);
    
    spec = addTime(vars,goTo([x y z],source,dest,traj(end,1),1));
    
    % create a trace with signals x and y
    try
        BrTrace = BreachTraceSystem({'x','y','z'}, traj);
        rob = BrTrace.CheckSpec(spec)
        robs = [robs rob];
        
        plot3(source(1),source(2),source(3),'*r');
        plot3(dest(1),dest(2),dest(3),'*r');    
        plot3(traj(:,2),traj(:,3),traj(:,4),'-','Color',robColor(rob));
    end
    
end

grid on
xlabel('x')
ylabel('y')
zlabel('z')

function col = robColor(rob)
    col = [255,127,80]/255;
    if( rob > 0.45 )
        col = [255,215,0]/255;
    end
    if( rob > 0.48 )
        col = [50,205,50]/255;
    end
end


