% syms t x k
% f1 = sin(k*t)/(k*t);	
% f2 = (1-1/x)^(k*x);
% f3 = (pi/2-atan(x))/(1/x);
% L1 = limit(f1,0)				%机器自动确认t为自变量
% L2 = limit(f2,x,inf)
% L3 = limit(f3,x,+inf)

% syms x
% D1 = diff(log(cos(exp(x))))
% D2 = diff('f(x^2)',x,2)

% syms n x k
% f1=1/(k*(k+1));
% s1=symsum(f1,k,1,n)
% s11=symsum(f1,k,1,inf)
% f2=x^k;
% s2=symsum(f2,k,0,inf)

% clear all	
% dsolve('D2y-4*Dy+13*y=0','y(0)=0','Dy(0)=3','x')
% dsolve('D2y-5*Dy+6*y=x*exp(2*x)','x')
% S=dsolve('Dx=y,Dy=-x')

% ezsurf('sin(s)*cos(t)','sin(s)*sin(t)','cos(s)',[0,pi],[0,2*pi])


% ezsurf('sqrt(x^2+y^2)',[-1,1,-1,1],'circ')

% clf
% x='cos(s)*cos(t)';
% y='cos(s)*sin(t)';
% z='sin(s)';
% ezsurf(x,y,z,[0,pi/2,0,3*pi/2])
% axis vis3d    %避免三维旋转时图形大小变化

% syms x y
% f = sin(x)*cos(y);
% subplot(2,2,1),ezsurf(f);
% subplot(2,2,2),ezmeshc(f);
% subplot(2,2,3),ezcontour(f)
% subplot(2,2,4),ezcontourf(f)

% S=solve('u*y^2+v*z+w=0','y+z+w=0','y','z')

% clear all, syms x;
% s=solve('(x+2)^x=2','x')	

% A=[1 1 1; 2 -1 1; 1 2 -3];
% b=[6;3;-4];
% X = inv(A)*b;
% [x1,x2,x3]=solve('x1+x2+x3=6','2*x1-x2+x3=3','x1+2*x2-3*x3=-4','x1','x2','x3')

% p = [4,-2,1,-1,5];
% x = roots(p)

% time=[0.25, 0.5 0.75, 1 1.5 2 2.5 3 3.5 4 4.5 5 6 7 8 9 10 11 12 13 14 15 16]';
% vol=[20 68 75 82 82 77 68 68 58 51 50 41 38 35 28 25 18 15 12 10 7 7 4]';
% plot(time,vol,'o');
% p=polyfit(time,vol,7)   % 7次多项式拟合
% f=polyval(p,time);    %求多项式的值
% hold on;
% plot(time,f);
% hold off;

% y=[8.8818 8.9487 9.0541 9.1545 9.2693 9.4289 9.6160 9.8150 9.9825 10.1558 10.3193]';
% k= [7.8381 7.9167 8.0048 8.1026 8.2556 8.5822 8.8287 9.0756 9.2175 9.4148 9.6198]';
% l= [8.3871 8.3872 8.3935 8.3971 8.4025 8.4048 8.4079 8.4141 8.4261 8.4377 8.4444]';
% t= [9.9551 9.9057 10.0972 9.9537 9.9370 9.9449 9.9636 10.1291 10.1573 10.2944 10.2093]';
% x= [ones(size(k)) k l t]; 
% [b,bint,r,rint,stats]=regress(y,x);

clc
clear all
A=xlsread('主成分分析.xls','B2:I16');
%得到的数据矩阵的行数和列数
a=size(A,1);
b=size(A,2);
%数据的标准化处理:得到标准化后的矩阵SA
for i=1:b
    SA(:,i)=(A(:,i)-mean(A(:,i)))/std(A(:,i));
end
%计算系数矩阵:CM
CM=corrcoef(SA);
%计算CM的特征值和特征向量
[V,D]=eig(CM);
%将特征值按降序排列到DS中
for j=1:b
    DS(j,1)=D(b+1-j,b+1-j);
end
%计算贡献率
for i=1:b
    DS(i,2)=DS(i,1)/sum(DS(:,1));%单个贡献率
    DS(i,3)=sum(DS(1:i,1))/sum(DS(:,1));%累计贡献率
end
%假定主成分的信息保留率
T=0.9;
for k=1:b
    if DS(k,3) >= T
        com_num=k;
        break;
    end
end
%提取主成分的特征向量
for j=1:com_num
    PV(:,j)=V(:,b+1-j);
end
%计算主成分得分
new_score=SA*PV;
for i=1:a
    total_score(i,1)=sum(new_score(i,:));
    total_score(i,2)=i;
end
%强主成分得分与总分放到同一个矩阵中
result_report=[new_score,total_score];
%按总分降序排列
result_report=sortrows(result_report,-4);
%输出结果
disp('特征值、贡献率、累计贡献率：')
DS
disp('信息保留率T对应的主成分数与特征向量：')
com_num
PV
disp('主成分得分及排序(按第4列的总分进行降序排列，前3列为个各成分得分，第5列为企业编号)')
result_report
