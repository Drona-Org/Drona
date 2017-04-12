function [ spec ] = goTo( vars,x0,x1,t,eps )
%GOTO Generates goto STL spec
    % goto := ev_[0,t]( reach(x1) ) and alw_[0,t]( in tube(x0,x1) )
    
    r = reach(vars,x1,t,eps);
    t = tube(vars,x0,x1,t,eps);
    spec = [r ' and ' t];   
end

