function [ dist ] = distFromLine( x0,x1,x2 )
% DISTFROMLINE Distance of x0 from line passing through x1 and x2


%     ap = x1-x0;
%     pq = x2-x1;
%     
%     dist = norm(ap - ((ap.*pq)/norm(pq)) );

    a = x2 - x1;
    b = x0 - x1;
    
    dist = norm(cross(a,b))/norm(a);

    %dist =  sum(cross(x0-x1,x0-x2).^2)/sum((x2-x1).^2);
    

end