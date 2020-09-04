%SEIR模型修正
%假设第25天开始采取隔离措施(12月31日第一例确诊；1月23号开始封城，此时其他省市也相应作出响应隔离措施)
N=13500000;%黄冈市人口数
E=400;%潜伏者
D=0;%死亡患者人数
I=500;%感染人数
I1=1;
I2=1;
S=N-I;%易感人数
R=0;%康复者人数
SQ=0;
EQ=0;
beta=0.034;%传染率
q=0.001;%隔离比例
c=40;%接触比例范围[1.6，4.8]
lamda=1/14;%隔离解除速率
sigma=0.001;%潜伏转化成感染速率
alpha=0.0306%死亡率
r=0.33;%治愈率
w=0.3;%潜伏转化成易感人群速率
T=21:70;
for idx=1:length(T)-1
    if idx<12
         S(idx+1)=S(idx)-c*beta*(I(idx)+E(idx))*S(idx)/N;
         E(idx+1)=E(idx)+c*beta*(I(idx)+E(idx))*S(idx)/N-sigma*E(idx);
         I(idx+1)=I(idx)+sigma*E(idx)-(r+alpha)*I(idx);
         R(idx+1)=R(idx)+r*I(idx);
    end
    if idx>=9
        beta=0.017;%传染率
        q=0.15;%隔离比例
        c=3;%接触比例范围[1.6，4.8]
        lamda=1/14;%隔离解除速率
        sigma=0.001;%潜伏转化成感染速率
        alpha=0.0306%死亡率
        r=0.33;%治愈率
        w=0.3;%潜伏转化成易感人群速率
        EQ(1:9)=0;
        SQ(1:9)=0;
        S(idx+1)=S(idx)-c*beta*(I(idx)+E(idx))*S(idx)/N-q*c*(1-beta)*(I(idx)+E(idx))*S(idx)/N+w*EQ(idx);
        E(idx+1)=E(idx)+c*beta*(I(idx)+E(idx))*S(idx)/N-sigma*E(idx)-q*EQ(idx);
        I(idx+1)=I(idx)+sigma*E(idx)-(r+alpha)*I(idx)+sigma*EQ(idx);
        SQ(idx+1)=SQ(idx)+q*c*(1-beta)*(I(idx)+E(idx))*S(idx)/N-lamda*SQ(idx);
        EQ(idx+1)=EQ(idx)+q*c*beta*E(idx)-w*EQ(idx);
        R(idx+1)=R(idx)+r*I(idx);
    end
end
N=7500000;%黄冈市人口数
E=40;%潜伏者
D=0;%死亡患者人数
%I=1;%感染人数
I1=1;
I2=1;
S=N-I;%易感人数
R=0;%康复者人数
SQ=0;
EQ=0;
beta=0.034;%传染率
q=0.001;%隔离比例
c=40;%接触比例范围[1.6，4.8]
lamda=1/14;%隔离解除速率
sigma=0.001;%潜伏转化成感染速率
alpha=0.0306%死亡率
r=0.33;%治愈率
w=0.3;%潜伏转化成易感人群速率
for idx=1:length(T)-1
    if idx<12
         S(idx+1)=S(idx)-c*beta*(I1(idx)+E(idx))*S(idx)/N;
         E(idx+1)=E(idx)+c*beta*(I1(idx)+E(idx))*S(idx)/N-sigma*E(idx);
         I1(idx+1)=I1(idx)+sigma*E(idx)-(r+alpha)*I1(idx);
         R(idx+1)=R(idx)+r*I1(idx);
    end
    if idx>=12
        beta=0.017;%传染率
        q=0.15;%隔离比例
        c=3;%接触比例范围[1.6，4.8]
        lamda=1/14;%隔离解除速率
        sigma=0.001;%潜伏转化成感染速率
        alpha=0.0306%死亡率
        r=0.33;%治愈率
        w=0.3;%潜伏转化成易感人群速率
        EQ(1:12)=0;
        SQ(1:12)=0;
        S(idx+1)=S(idx)-c*beta*(I1(idx)+E(idx))*S(idx)/N-q*c*(1-beta)*(I1(idx)+E(idx))*S(idx)/N+w*EQ(idx);
        E(idx+1)=E(idx)+c*beta*(I1(idx)+E(idx))*S(idx)/N-sigma*E(idx)-q*EQ(idx);
        I1(idx+1)=I1(idx)+sigma*E(idx)-(r+alpha)*I1(idx)+sigma*EQ(idx);
        SQ(idx+1)=SQ(idx)+q*c*(1-beta)*(I1(idx)+E(idx))*S(idx)/N-lamda*SQ(idx);
        EQ(idx+1)=EQ(idx)+q*c*beta*E(idx)-w*EQ(idx);
        R(idx+1)=R(idx)+r*I1(idx);
    end
end

N=7500000;%黄冈市人口数
E=40;%潜伏者
D=0;%死亡患者人数
%I=1;%感染人数
%I1=1;
I2=1;
S=N-I;%易感人数
R=0;%康复者人数
SQ=0;
EQ=0;
beta=0.034;%传染率
q=0.001;%隔离比例
c=40;%接触比例范围[1.6，4.8]
lamda=1/14;%隔离解除速率
sigma=0.001;%潜伏转化成感染速率
alpha=0.0306%死亡率
r=0.33;%治愈率
w=0.3;%潜伏转化成易感人群速率
for idx=1:length(T)-1
    if idx<15
         S(idx+1)=S(idx)-c*beta*(I2(idx)+E(idx))*S(idx)/N;
         E(idx+1)=E(idx)+c*beta*(I2(idx)+E(idx))*S(idx)/N-sigma*E(idx);
         I2(idx+1)=I2(idx)+sigma*E(idx)-(r+alpha)*I2(idx);
         R(idx+1)=R(idx)+r*I2(idx);
    end
    if idx>=15
        beta=0.017;%传染率
        q=0.15;%隔离比例
        c=3;%接触比例范围[1.6，4.8]
        lamda=1/14;%隔离解除速率
        sigma=0.001;%潜伏转化成感染速率
        alpha=0.0306%死亡率
        r=0.33;%治愈率
        w=0.3;%潜伏转化成易感人群速率
        EQ(1:15)=0;
        SQ(1:15)=0;
        S(idx+1)=S(idx)-c*beta*(I2(idx)+E(idx))*S(idx)/N-q*c*(1-beta)*(I2(idx)+E(idx))*S(idx)/N+w*EQ(idx);
        E(idx+1)=E(idx)+c*beta*(I2(idx)+E(idx))*S(idx)/N-sigma*E(idx)-q*EQ(idx);
        I2(idx+1)=I2(idx)+sigma*E(idx)-(r+alpha)*I2(idx)+sigma*EQ(idx);
        SQ(idx+1)=SQ(idx)+q*c*(1-beta)*(I2(idx)+E(idx))*S(idx)/N-lamda*SQ(idx);
        EQ(idx+1)=EQ(idx)+q*c*beta*E(idx)-w*EQ(idx);
        R(idx+1)=R(idx)+r*I2(idx);
    end
end
%B={'12-31','01-26','02-09','02-29','03-20','04-09','04-29','05-19','06-08','06-28','07-17'};

%subplot(2,1,1)
plot(T,I,T,I1,T,I2);

grid on;
hold on;


% plot([25 25],[0 2000]);
% plot([39 39],[0 2000]);
% plot([53 53],[0 2000]);
%set(gca,'XTickLabel',B)
xlabel('日期');
ylabel('人数');
legend('提前3天采取措施','现实','延后3天采取措施');
title('隔离时间对患病者（I）的影响');

% %SEIR模型修正
% %假设第25天开始采取隔离措施(12月31日第一例确诊；1月23号开始封城，此时其他省市也相应作出响应隔离措施)
% N=7500000;%黄冈市人口数
% E=40;%潜伏者
% D=0;%死亡患者人数
% I=1;%感染人数
% S=N-I;%易感人数
% R=0;%康复者人数
% SQ=0;
% EQ=0;
% beta=0.034;%传染率
% q=0.001;%隔离比例
% c=40;%接触比例范围[1.6，4.8]
% lamda=1/14;%隔离解除速率
% sigma=0.001;%潜伏转化成感染速率
% alpha=0.0306%死亡率
% r=0.33;%治愈率
% w=0.3;%潜伏转化成易感人群速率
% T=21:100;
% for idx=1:length(T)-1
%     if idx<12
%          S(idx+1)=S(idx)-c*beta*(I(idx)+E(idx))*S(idx)/N;
%          E(idx+1)=E(idx)+c*beta*(I(idx)+E(idx))*S(idx)/N-sigma*E(idx);
%          I(idx+1)=I(idx)+sigma*E(idx)-(r+alpha)*I(idx);
%          R(idx+1)=R(idx)+r*I(idx);
%     end
%     if idx>=12
%         beta=0.007;%传染率
%         q=0.15;%隔离比例
%         c=1;%接触比例范围[1.6，4.8]
%         lamda=1/14;%隔离解除速率
%         sigma=0.001;%潜伏转化成感染速率
%         alpha=0.0306%死亡率
%         r=0.53;%治愈率
%         w=0.3;%潜伏转化成易感人群速率
%         EQ(1:12)=0;
%         SQ(1:12)=0;
%         S(idx+1)=S(idx)-c*beta*(I(idx)+E(idx))*S(idx)/N-q*c*(1-beta)*(I(idx)+E(idx))*S(idx)/N+w*EQ(idx);
%         E(idx+1)=E(idx)+c*beta*(I(idx)+E(idx))*S(idx)/N-sigma*E(idx)-q*EQ(idx);
%         I(idx+1)=I(idx)+sigma*E(idx)-(r+alpha)*I(idx)+sigma*EQ(idx);
%         SQ(idx+1)=SQ(idx)+q*c*(1-beta)*(I(idx)+E(idx))*S(idx)/N-lamda*SQ(idx);
%         EQ(idx+1)=EQ(idx)+q*c*beta*E(idx)-w*EQ(idx);
%         R(idx+1)=R(idx)+r*I(idx);
%     end
% end
% %B={'12-31','01-26','02-09','02-29','03-20','04-09','04-29','05-19','06-08','06-28','07-17'};
% 
% subplot(2,1,2)
% plot(T,I);
% 
% grid on;
% hold on;
% clc;
% filename='statistic1.xls';
% A=xlsread(filename,2,'E2:E61');
% C=zeros(86,1);
% C(27:86)=A(1:60);
% Y=C(1:86);
% X=1:length(Y);
% plot(X,Y,'r*');
% %ha=gca;
% %set(ha,'xlim',[26,90])
% grid on;
% hold on;
% % plot([25 25],[0 2000]);
% % plot([39 39],[0 2000]);
% % plot([53 53],[0 2000]);
% %set(gca,'XTickLabel',B)
% xlabel('日期');
% ylabel('人数');
% legend('拟合患者数量','实际数量');
% title('黄石市采取隔离措施的SEIR拟合模型');

