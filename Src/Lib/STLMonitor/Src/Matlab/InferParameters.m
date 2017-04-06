path_to_breach = '~/breach/';
path_to_monitor = '~/DronaForPX4/Src/Lib/STLMonitor/Src/Matlab';

addpath(path_to_breach);
addpath(path_to_monitor);

syms x y z
vars = 'xyz';

n = 1000; % number of experiments
k = 2;
path_to_experiments = ['~/build-DronaForPX4-Desktop_Qt_5_8_0_GCC_64bit-Default/Src/Experiments/VerifyAPI/traj/' num2str(k)];


min_rob = +Inf;
max_time = 0;

eps = 0.9;
eps_inc = 0.01;

for i=1:n
    
    traj_file_name = [path_to_experiments '/traj_' num2str(k) '_' num2str(i-1) '.csv'];
    coord_file_name = [path_to_experiments '/coord_' num2str(k) '_' num2str(i-1) '.csv'];
    
    traj = csvread(traj_file_name); traj = traj(:,1:end-1);
    coord = csvread(coord_file_name);

    source = coord(1:3);
    dest = coord(4:6);
    
    rob = 0;
    
    while 1
        spec = addTime(vars,goTo([x y z],source,dest,traj(end,1),eps));
        % create a trace with signals x and y
        try
            BrTrace = BreachTraceSystem({'x','y','z'}, traj);
            rob = BrTrace.CheckSpec(spec);
        end
        
        %plot(i,rob,'.b');
        %plot(i,eps,'.r');
        
        if rob < 0.5
            eps = eps + eps_inc;
        else
            min_rob = min(min_rob,rob);
            break;
        end        
    end
    
    max_time = max(max_time,traj(end,1));
    
end

eps
min_rob
max_time



