function [ dist ] = distFromLine( x0,x1,x2 )
% DISTFROMLINE Distance of x0 from line passing through x1 and x2
    
    num = norm( cross((x0-x1),(x0-x2)) );
    den = norm( x2-x1 );
    dist = num/den;      
end