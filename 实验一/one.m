%读入原始图像并显示
image_original=imread('dog.jpg');
figure(1)
subplot(2,4,1);
imshow(image_original);
title('原输入图像');
axis square;
 
%生成含高斯噪声图像并显示
pp=0.05;
image_gaosi_noise=imnoise(image_original,'gaussian',0,pp);
subplot(2,4,2);
imshow(image_gaosi_noise);
title('添加高斯噪声后图像');
axis square;
 
%生成含椒盐噪声图像并显示
d=0.05;
image_saltpepper_noise=imnoise(image_original,'salt & pepper',d);
subplot(2,4,3);
imshow(image_saltpepper_noise);
title('添加椒盐噪声后图像');
axis square;
 
%生成含乘性噪声图像并显示
var=0.05;
image_speckle_noise=imnoise(image_original,'speckle',var);
subplot(2,4,4);
imshow(image_speckle_noise);
title('添加乘性噪声后图像');
axis square;
 
%原图像直方图
r=0:255;  
bb=image_original(:); 
pg=hist(bb,r);  
pgr1=pg/length(bb);  
subplot(245);bar(pgr1);title('源输入图像的直方图');
 
r=0:255;  
bl=image_gaosi_noise(:); 
pg=hist(bl,r);  
pgr2=pg/length(bl);  
subplot(246);bar(pgr2);title('高斯噪声污染后的直方图');
 
r=0:255;  
bh=image_saltpepper_noise(:); 
pu=hist(bh,r);  
pgr3=pu/length(bh);  
subplot(247);bar(pgr3);title('椒盐噪声污染后的直方图');
 
r=0:255;  
ba=image_speckle_noise(:); 
pa=hist(ba,r);  
pgr4=pa/length(ba);  
subplot(248);bar(pgr4);title('乘性噪声污染后直方图');


