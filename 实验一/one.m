%����ԭʼͼ����ʾ
image_original=imread('dog.jpg');
figure(1)
subplot(2,4,1);
imshow(image_original);
title('ԭ����ͼ��');
axis square;
 
%���ɺ���˹����ͼ����ʾ
pp=0.05;
image_gaosi_noise=imnoise(image_original,'gaussian',0,pp);
subplot(2,4,2);
imshow(image_gaosi_noise);
title('��Ӹ�˹������ͼ��');
axis square;
 
%���ɺ���������ͼ����ʾ
d=0.05;
image_saltpepper_noise=imnoise(image_original,'salt & pepper',d);
subplot(2,4,3);
imshow(image_saltpepper_noise);
title('��ӽ���������ͼ��');
axis square;
 
%���ɺ���������ͼ����ʾ
var=0.05;
image_speckle_noise=imnoise(image_original,'speckle',var);
subplot(2,4,4);
imshow(image_speckle_noise);
title('��ӳ���������ͼ��');
axis square;
 
%ԭͼ��ֱ��ͼ
r=0:255;  
bb=image_original(:); 
pg=hist(bb,r);  
pgr1=pg/length(bb);  
subplot(245);bar(pgr1);title('Դ����ͼ���ֱ��ͼ');
 
r=0:255;  
bl=image_gaosi_noise(:); 
pg=hist(bl,r);  
pgr2=pg/length(bl);  
subplot(246);bar(pgr2);title('��˹������Ⱦ���ֱ��ͼ');
 
r=0:255;  
bh=image_saltpepper_noise(:); 
pu=hist(bh,r);  
pgr3=pu/length(bh);  
subplot(247);bar(pgr3);title('����������Ⱦ���ֱ��ͼ');
 
r=0:255;  
ba=image_speckle_noise(:); 
pa=hist(ba,r);  
pgr4=pa/length(ba);  
subplot(248);bar(pgr4);title('����������Ⱦ��ֱ��ͼ');


