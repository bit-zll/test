clear;clc;
% points = detectSURFFeatures(I) %I������ĻҶ�ͼ�񣬷���ֵ��һ�� SURFPoints�࣬���SURFPoints�������һЩ������Ҷ�ͼ������ȡ��һЩ����
% points = detectSURFFeatures(I,Name,Value)
% 
% [features,validPoints] = extractFeatures(I,points);%�����points���Ǹո�detectSURFFeatures�����ķ���ֵ�� I ��������ĻҶ�ͼ��
% 
% %feature��Ϊƥ�亯��������ֵ
% [features,validPoints] = extractFeatures(I,points,Name,Value)
% 
% indexPairs = matchFeatures(features1,features2);%indexPairs �Ƿ��ص�����ͼ��ƥ���ָ��%����ط����Խ����ķ���ֵ���н�ͼ
%                                                 %features1��������extractFeatures�����ķ���ֵ��validpoints��Ȼ��ֻ��������Ҫ��Ե�����ͼƬ�Ϳ�����
% [indexPairs,matchmetric] = matchFeatures(features1,features2);
% [indexPairs,matchmetric] = matchFeatures(features1,features2,Name,Value);
% 
% showMatchedFeatures(I1,I2,matchedPoints1,matchedPoints2)
% showMatchedFeatures(I1,I2,matchedPoints1,matchedPoints2,method)
% % I1 �� I2������Ҫƥ�����������

clc
%��ȡͼ��
I1= imread('lena1.jpg');  
I1=imresize(I1,0.6);  %imresize ��ԭ����ͼ����Сԭ����һ��
I1=rgb2gray(I1);  %��RGBͼ���ɻҶ�ͼ��
figure
imshow(I1)
I2= imread('lena2.jpg');  
I2=imresize(I2,0.6);  
I2=rgb2gray(I2);
figure
imshow(I2)

%Ѱ��������  
points1 = detectSURFFeatures(I1);  %��ȡ������
points2 = detectSURFFeatures(I2);   

%Extract the features.������������  
[f1, vpts1] = extractFeatures(I1, points1);  
[f2, vpts2] = extractFeatures(I2, points2);  

%Retrieve the locations of matched points. The SURF feature vectors are already normalized.  
%����ƥ��  
indexPairs = matchFeatures(f1, f2, 'Prenormalized', true) ;  
matched_pts1 = vpts1(indexPairs(:, 1)); %����ط�Ӧ���Ƕ�������ȡֵ�� ���Ӧ���ǰ�����������һ������
matched_pts2 = vpts2(indexPairs(:, 2));  
%��ʾƥ��
figure('name','ƥ����ͼ��'); showMatchedFeatures(I1,I2,matched_pts1,matched_pts2,'montage');  %�ܹ�����39��������
legend('matched points 1','matched points 2'); 