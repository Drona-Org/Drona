% r = [];
% 
% traj.t = T(1:end-1,1)';
% traj.X = T(1:end-1,2:end-1)';
% 
% 
% for i=2:size(T,1)
%     traj.time = T(1:i,1)';
%     traj.X = T(1:i,2:end)';        
%     [a b] = STL_EvalClassicOnline(Sys,phi,P,traj);
%     r = [r ; a(:,1)']
% end


figure(1)
hold on

eps = 0.2;
for i=2:size(T,1)
    plot3([T(i-1,2) T(i,2)],[T(i-1,3) T(i,3)],[T(i-1,4)-eps T(i,4)-eps],'-','Color',robcol(r(i-1,2))/255);    
end


function col = robcol(rob)

    if rob < 0
        col = [255,0,0];
        return        
    end
    if rob < 0.2
        col = [255,165,0];
        return        
    end
    col = [124,252,0];

end







