function [ cl ] = epsClose( x0,x1,eps )
%EPSCLOSE Check the distance between x0 and x1 is smaller than eps

    cl = dist(x0,x1) < eps;
end

