function [ dist ] = distTrajFromLine( traj,x1,x2 )
% DISTTRAJFROMLINE Max distance of traj from line passing through x1 and x2

    dists = zeros(1,size(traj,1));
    for i=1:size(traj,1)
        dists(i) = distFromLine(traj(i,2:end),x1,x2);
    end
    dist = max(dists);    

end