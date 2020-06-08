I = imread('fog.jpg');
 
R = I(:, :, 1);%����R�洢rgbͼ��Rͨ���Ķ�ά����
[N1, M1] = size(R);
R0 = double(R);%ͼ��������������ת��Ϊdouble����
Rlog = log(R0+1);
Rfft2 = fft2(R0);%2ά��ɢ����Ҷ�任
 
sigma = 250;
F = fspecial('gaussian', [N1,M1], sigma);%��˹��ͨ�˲�����ģ��ߴ�Ϊ[N1,M1]��sigma��ʾ�˲����ı�׼���λΪ����
Efft = fft2(double(F));
 
DR0 = Rfft2.* Efft;%�ø�˹ģ���ԭͼ������������൱�ڶ�ԭͼ������ͨ�˲�
DR = ifft2(DR0);%����Ҷ���任
 
DRlog = log(DR +1);
Rr = Rlog - DRlog;%�ڶ������У���ԭͼ���ȥ��ͨ�˲����ͼ�񣬵õ���Ƶ��ǿ��ͼ��
EXPRr = exp(Rr);
%����ǿ���ͼ����жԱȶ�������ǿ
MIN = min(min(EXPRr));
MAX = max(max(EXPRr));
EXPRr = (EXPRr - MIN)/(MAX - MIN);
EXPRr = adapthisteq(EXPRr);%adapthisteq����ִ�жԱȶ����޵�����Ӧֱ��ͼ����
 
G = I(:, :, 2);
 
G0 = double(G);
Glog = log(G0+1);
Gfft2 = fft2(G0);
 
DG0 = Gfft2.* Efft;
DG = ifft2(DG0);
 
DGlog = log(DG +1);
Gg = Glog - DGlog;
EXPGg = exp(Gg);
MIN = min(min(EXPGg));
MAX = max(max(EXPGg));
EXPGg = (EXPGg - MIN)/(MAX - MIN);
EXPGg = adapthisteq(EXPGg);
 
B = I(:, :, 3);
 
B0 = double(B);
Blog = log(B0+1);
Bfft2 = fft2(B0);
 
DB0 = Bfft2.* Efft;
DB = ifft2(DB0);
 
DBlog = log(DB+1);
Bb = Blog - DBlog;
EXPBb = exp(Bb);
MIN = min(min(EXPBb));
MAX = max(max(EXPBb));
EXPBb = (EXPBb - MIN)/(MAX - MIN);
EXPBb = adapthisteq(EXPBb);
 
result = cat(3, EXPRr, EXPGg, EXPBb);%cat��������������
subplot(121), imshow(I);
subplot(122), imshow(result);