I = imread('fog.jpg');
 
R = I(:, :, 1);%矩阵R存储rgb图中R通道的二维矩阵
[N1, M1] = size(R);
R0 = double(R);%图像矩阵的数据类型转换为double类型
Rlog = log(R0+1);
Rfft2 = fft2(R0);%2维离散傅立叶变换
 
sigma = 250;
F = fspecial('gaussian', [N1,M1], sigma);%高斯低通滤波器，模板尺寸为[N1,M1]，sigma表示滤波器的标准差，单位为像素
Efft = fft2(double(F));
 
DR0 = Rfft2.* Efft;%用高斯模板对原图像作卷积，即相当于对原图像作低通滤波
DR = ifft2(DR0);%傅里叶反变换
 
DRlog = log(DR +1);
Rr = Rlog - DRlog;%在对数域中，用原图像减去低通滤波后的图像，得到高频增强的图像
EXPRr = exp(Rr);
%对增强后的图像进行对比度拉伸增强
MIN = min(min(EXPRr));
MAX = max(max(EXPRr));
EXPRr = (EXPRr - MIN)/(MAX - MIN);
EXPRr = adapthisteq(EXPRr);%adapthisteq函数执行对比度受限的自适应直方图均衡
 
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
 
result = cat(3, EXPRr, EXPGg, EXPBb);%cat：用来联结数组
subplot(121), imshow(I);
subplot(122), imshow(result);