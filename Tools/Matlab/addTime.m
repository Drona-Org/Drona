function [ spec ] = addTime( vars, spec )
%ADDTIME add '[t]' after the variables' specification (required by Breach)

    for i=1:size(vars,2)
        spec = strrep(spec,vars(i),[vars(i) '[t]']);        
    end
end

