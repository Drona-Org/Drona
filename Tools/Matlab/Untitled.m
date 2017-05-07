clear all
close all

struct = xml2struct('./utopia.xml');

for i=1:size(struct.configuration.obstacles.box,2)
    box = struct.configuration.obstacles.box(i);
    loAtt = box{1}.low.Attributes;
    hiAtt = box{1}.high.Attributes;
    lo = [str2double(loAtt.x) str2double(loAtt.y) str2double(loAtt.z) ];
    hi = [str2double(hiAtt.x) str2double(hiAtt.y) str2double(hiAtt.z) ];
    obs{i,1} = lo;
    obs{i,2} = hi;
end


hold on

color = [192,192,192]/255;
alpha = 1;
for i=1:size(obs,1)
    lo = obs{i,1}
    hi = obs{i,2}  
    len = hi-lo;
    lo = [lo(1)-25 lo(2)-25 lo(3)];
    plotcube(len,lo,alpha,color)
end

view([125 62])



wp(1,:) = [0, 0, 3];
wp(2,:) = [6.9, 13.6, 4];
wp(3,:) = [18.8, 13.3, 6];
wp(4,:) = [18.7, -2.3, 6];
wp(5,:) = [0.69, -2.8, 3];
wp(6,:) = [-20.5, -6, 6];
wp(7,:) = [-21, -16, 4];
wp(8,:) = [-6.8, -22, 4];
wp(9,:) = [1.17, -16.4, 5];
wp(10,:) = [0.69, -2.81, 6];
wp(11,:) = [-5.3, 18.3, 5];
wp(12,:) = [-21.56, 15.12, 4];
wp(13,:) = [-20.52, -0.59, 5];
wp(14,:) = [0.69, -2.81, 6];
wp(15,:) = [18.78, -2.31, 6];
wp(16,:) = [17.72, -22.08, 2];
wp(17,:) = [1.17, -16.4, 5];
wp(18,:) = [0.69, -2.81, 6];

for i=1:size(wp,1)
    plot3(wp(i,1),wp(i,2),wp(i,3),'ob','MarkerSize',10,'MarkerFaceColor','b')
end

tmp = csvread('traj.csv');
traj = [tmp(:,3) tmp(:,2) -tmp(:,4)];

plot3(traj(:,1),traj(:,2),traj(:,3),'k-','LineWidth',2)

