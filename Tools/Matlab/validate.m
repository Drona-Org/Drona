num_exs = [911 189 588 401];

base_path = '../../Src/Experiments/VerifyAPI/Logs';

X = [];
t = [];
eps = [];

counter = 0;
good = 0;

for i=2:size(num_exs,2)
    for j=1:num_exs(i)
        T = []; C = [];
        try
            traj_file_name = [base_path num2str(i) '/traj_' num2str(j-1) '.csv'];
            coord_file_name = [base_path num2str(i) '/coord_' num2str(j-1) '.csv'];
            T = csvread(traj_file_name);
            C = csvread(coord_file_name);
        end
        if ~isempty(T)
            T = T(:,1:end-1);
            T(:,end) = -T(:,end);
            
            l = C(1,1);
            v = (C(5:7) - C(2:4))/l;
            X = [X ; l v];
            
            t = [t T(end,1)];
            eps = [eps distTrajFromLine(T,C(2:4),C(5:7))];
            
            yhat = predict([l v],b_eps);
            y = distTrajFromLine(T,C(2:4),C(5:7));
            
            if(yhat > y )
                good = good + 1;
            end
            counter = counter + 1;
            
        end
    end
end
