%����ԭʼͼ����ʾ
image_original=imread('dog.jpg');
figure(1)
subplot(2,4,1);
imshow(image_original);
title('ԭ����ͼ��');
axis square;

%���ɺ���������ͼ����ʾ
dd=0.05;
image_saltpepper_noise=imnoise(image_original,'salt & pepper',dd);

h_gaosi1=fspecial('gaussian',3,1);
image_saltpepper_noise_after2=imfilter(image_saltpepper_noise,h_gaosi1);
subplot(2,4,3);
imshow(image_saltpepper_noise_after2);title('��˹ƽ��ȥ��������Ч��');
axis square;

r=0:255;  
bh=image_saltpepper_noise_after2(:); 
pu=hist(bh,r);  
pgr3=pu/length(bh);  
subplot(247);bar(pgr3);title('��˹ƽ��ȥ�����������ֱ��ͼ');
