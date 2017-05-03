function [ spec ] = followTraj( vars, goal_pts, epss )
%FOLLOWTRAJ Follow piece-wise trajectory specification

    eps = epss(1);

    xi = goal_pts(1,:);
    xg = goal_pts(2,:);
    reach_xg = epsClose(vars,xg,eps);

    if size(goal_pts,1) == 2
        spec = ['(' char(tube(vars,xi,xg,700,eps)) ') until ( ' char(reach_xg) ' ) '];
        return
    end
    
    in_pipe = char(tube(vars,xi,xg,700,eps));
    rec = ['( ' char(reach_xg) ' ) and ( ' followTraj( vars, goal_pts(2:end,:),epss(2:end)) ' )'];
    spec = ['(' char(in_pipe) ') until ( ' rec ' ) '];
    
    return

end

