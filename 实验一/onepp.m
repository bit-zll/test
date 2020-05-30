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

h_gaosi1=fspecial('gaussian',3,1);
image_gaosi_noise_after2=imfilter(image_gaosi_noise,h_gaosi1);
subplot(2,4,3);
imshow(image_gaosi_noise_after2);title('高斯平滑去高斯噪声效果');
axis square;

r=0:255;  
bh=image_gaosi_noise_after2(:); 
pu=hist(bh,r);  
pgr3=pu/length(bh);  
subplot(247);bar(pgr3);title('高斯平滑去高斯噪声后的直方图');