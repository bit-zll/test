%���ڶ�ά٤�����Ĺ��ղ�����ͼ������ӦУ���㷨
clc,close all;
tic;
im=imread('u2.jpg');
figure;
imshow(im);
title('ԭͼ');
[h,s,v]=rgb2hsv(im);%ת��hsv�ռ䣬������h����
%��˹�˲�
HSIZE= min(size(im,1),size(im,2));%��˹����˳ߴ�
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
gaus=(gaus1+gaus2+gaus3)/3;%��߶ȸ�˹�������Ȩ��Ȩ��Ϊ1/3
% gaus=(gaus*255);
figure;
imshow(gaus,[]);
title('���շ���');
%��ά٤����
m=mean(gaus(:));
[w,height]=size(v);
out=zeros(size(v));
gama=power(0.5,((m-gaus)/m));%���ݹ�ʽgammaУ������
out=(power(v,gama));
figure;
imshow(out,[]);
rgb=hsv2rgb(h,s,out);%ת��rgb�ռ���ʾ
figure;
imshow(rgb);
title('������')
toc;