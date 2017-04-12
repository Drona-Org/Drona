function [ dist ] = distFromLine( x0,x1,x2 )
% DISTFROMLINE Distance of x0 from line passing through x1 and x2
    
%     cross((x0-x1),(x0-x2))
%     num = norm( cross((x0-x1),(x0-x2)) )
%     den = norm( x2-x1 )
%     dist = num/den;      

    ap = x1-x0;
    pq = x2-x1;
    
    dist = norm(abs( ap - ((ap.*pq).*pq)/norm(pq) ));
    

end