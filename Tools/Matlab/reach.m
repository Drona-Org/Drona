function [ spec ] = reach( vars,x,t,eps )
%REACH Generates reach STL spec
    % reach := ev_[0,t]( dist(vars,x) < eps )

    d = epsClose(vars,x,eps);
    F = ['ev_[' num2str(0) ',' num2str(t) ']'];
    spec = [F '( ' char(d) ' )'];
end

