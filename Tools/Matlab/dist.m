function [ d ] = dist( a,b )
% DIST Euclidean distance between a and b
    
    d = sqrt(sum((a - b).^2));
end



