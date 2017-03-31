function [ spec ] = tube( x0,x1,x2,t,eps )
%TUBE Generate tube STL spec
    % tube := alw_[0,t]( dist(x0,line(x1,x2)) < eps )
    
    d = distFromLine(x0,x1,x2);
    G = ['alw_[' num2str(0) ',' num2str(t) ']'];
    spec = [G '( ( ' char(d) ' ) < ' num2str(eps) ')'];
end

