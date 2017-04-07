clear all


path_to_experiments = '~/build-DronaForPX4-Desktop_Qt_5_8_0_GCC_64bit-Default/Src/Experiments/VerifyAPI/traj/2/';

n_start = 1;
n_stop = 10;

t_offset = 0;

x_goal_0 = csvread([ path_to_experiments 'coord_2_' num2str(n_start-1) '.csv' ]);
x_goals = x_goal_0(1:3);

traj_i = csvread([ path_to_experiments 'traj_2_' num2str(n_start-1) '.csv' ]);
traj = [0 traj_i(1,2:4)];


for i=n_start:1:n_stop
    traj_i = csvread([ path_to_experiments 'traj_2_' num2str(i-1) '.csv' ]);
    traj_i = traj_i(:,1:4);
    traj_i(:,1) = traj_i(:,1) + t_offset;
    traj = [ traj ; traj_i ];
    
    
    t_offset = traj(end,1);
    
    x_goal_i = csvread([ path_to_experiments 'coord_2_' num2str(i-1) '.csv' ]);
    x_goals = [ x_goals ; x_goal_i(4:6)];
    
end

syms x y z
vars = [x y z];
    
    
