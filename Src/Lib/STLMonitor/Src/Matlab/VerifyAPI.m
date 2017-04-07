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

k = 3;   % experiment number
n = 1000; % number of experiments

min_r = +Inf;

robs = ones(1,n)*(+Inf);

%for i=275:325
for i=1:n
    
    traj_file_name = [path_to_experiments 'traj/' num2str(k) '/traj_' num2str(k) '_' num2str(i-1) '.csv']
    coord_file_name = [path_to_experiments 'traj/' num2str(k) '/coord_' num2str(k) '_' num2str(i-1) '.csv'];
    
    traj = csvread(traj_file_name); traj = traj(:,1:end-1);
    coord = csvread(coord_file_name);
    
    source = coord(1:3);
    dest = coord(4:6);
    
    spec = addTime(vars,goTo([x y z],source,dest,traj(end,1),1.27));
    
    % create a trace with signals x and y
    try
        BrTrace = BreachTraceSystem({'x','y','z'}, traj);
        rob = BrTrace.CheckSpec(spec);
        robs(i) = rob;
        
        plot3(source(1),source(2),source(3),'.b');
        plot3(dest(1),dest(2),dest(3),'.b');    
        plot3(traj(:,2),traj(:,3),traj(:,4),'-','Color',robColor(rob));
    end
    
end


function col = robColor(rob)
    cmap = colormap('HSV');
    min_cmap = 1;
    max_cmap = 55;
    min_rob = 0.5;
    max_rob = 1.27;
    
    a = (min_cmap - max_cmap)/( min_rob - max_rob );
    b = min_cmap - min_rob*a;
    
    col_i = floor(a*rob + b);
    col = cmap( col_i, : );    
end


