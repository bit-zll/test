%基于二维伽马函数的光照不均匀图像自适应校正算法
clc,close all;
tic;
im=imread('u2.jpg');
figure;
imshow(im);
title('原图');
[h,s,v]=rgb2hsv(im);%转到hsv空间，对亮度h处理
%高斯滤波
HSIZE= min(size(im,1),size(im,2));%高斯卷积核尺寸
q=sqrt(2);
SIGMA1=15;
SIGMA2=80;
SIGMA3=250;
F1 = fspecial('gaussian',HSIZE,SIGMA1/q);
F2 = fspecial('gaussian',HSIZE,SIGMA2/q) ;
F3 = fspecial('gaussian',HSIZE,SIGMA3/q) ;
gaus1= imfilter(v, F1, 'replicate');
gaus2= imfilter(v, F2, 'replicate');
gaus3= imfilter(v, F3, 'replicate');
gaus=(gaus1+gaus2+gaus3)/3;%多尺度高斯卷积，加权，权重为1/3
% gaus=(gaus*255);
figure;
imshow(gaus,[]);
title('光照分量');
%二维伽马卷积
m=mean(gaus(:));
[w,height]=size(v);
out=zeros(size(v));
gama=power(0.5,((m-gaus)/m));%根据公式gamma校正处理
out=(power(v,gama));
figure;
imshow(out,[]);
rgb=hsv2rgb(h,s,out);%转回rgb空间显示
figure;
imshow(rgb);
title('处理结果')
toc;