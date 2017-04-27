function [ y ] = predict( x, b )
%PREDICT
    y = x*b(2:end) + b(1);
end

