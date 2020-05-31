clear;clc;
% points = detectSURFFeatures(I) %I是输入的灰度图像，返回值是一个 SURFPoints类，这个SURFPoints类包含了一些从这个灰度图像中提取的一些特征
% points = detectSURFFeatures(I,Name,Value)
% 
% [features,validPoints] = extractFeatures(I,points);%这里的points就是刚刚detectSURFFeatures函数的返回值， I 就是输入的灰度图像
% 
% %feature作为匹配函数的输入值
% [features,validPoints] = extractFeatures(I,points,Name,Value)
% 
% indexPairs = matchFeatures(features1,features2);%indexPairs 是返回的两幅图像匹配的指标%这个地方可以将他的返回值进行截图
%                                                 %features1就是上面extractFeatures函数的返回值中validpoints，然后只用输入想要配对的两张图片就可以了
% [indexPairs,matchmetric] = matchFeatures(features1,features2);
% [indexPairs,matchmetric] = matchFeatures(features1,features2,Name,Value);
% 
% showMatchedFeatures(I1,I2,matchedPoints1,matchedPoints2)
% showMatchedFeatures(I1,I2,matchedPoints1,matchedPoints2,method)
% % I1 和 I2就是需要匹配的两个函数

clc
%读取图像
I1= imread('lena1.jpg');  
I1=imresize(I1,0.6);  %imresize 将原来的图像缩小原来的一般
I1=rgb2gray(I1);  %把RGB图像变成灰度图像
figure
imshow(I1)
I2= imread('lena2.jpg');  
I2=imresize(I2,0.6);  
I2=rgb2gray(I2);
figure
imshow(I2)

%寻找特征点  
points1 = detectSURFFeatures(I1);  %读取特征点
points2 = detectSURFFeatures(I2);   

%Extract the features.计算描述向量  
[f1, vpts1] = extractFeatures(I1, points1);  
[f2, vpts2] = extractFeatures(I2, points2);  

%Retrieve the locations of matched points. The SURF feature vectors are already normalized.  
%进行匹配  
indexPairs = matchFeatures(f1, f2, 'Prenormalized', true) ;  
matched_pts1 = vpts1(indexPairs(:, 1)); %这个地方应该是对他进行取值吧 这个应该是啊吧他们做成一个数组
matched_pts2 = vpts2(indexPairs(:, 2));  
%显示匹配
figure('name','匹配后的图像'); showMatchedFeatures(I1,I2,matched_pts1,matched_pts2,'montage');  %总共找了39个特征点
legend('matched points 1','matched points 2'); 