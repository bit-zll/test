%博客SEIR模型
%假设第25天开始采取隔离措施(12月31日第一例确诊；...
%1月23号武汉开始封城，此时其他省市也相应作出响应隔离措施)
N=2863000;%黄冈市人口数
E=0;%潜伏者
D=0;%死亡患者人数
I=1;%感染人数
S=N-I;%易感人数
R=0;%康复者人数
SQ=0;%隔离的疑似病例
EQ=0;%隔离的潜伏人数
r=3.14;%感染者接触数量
B=0.6;%传染概率
lamda=1/14;%隔离的解除速率
a=1/7;%潜伏者转化为感染者的概率
r2=1.9;%潜伏者接触人数
B2=0.03;%潜伏者传染正常人的概率
y=0.08;%康复概率
q=0.01;%隔离比例
k=0.01;%日致死率
B3=0.1;%转阴率
T=21:200;
for idx=1:length(T)-1
    if idx>=25
        r=0.5;
        r2=0.1;
        y=0.26;
        k=0.0043;
        
    end
    if idx<25
        S(idx+1)=S(idx)-(r*B*S(idx)*I(idx))/N-(r2*B2*S(idx)*E(idx))/N+B3*E(idx);%易感人群迭代
        E(idx+1)=E(idx)+(r*B*S(idx)*I(idx))/N-(a*E(idx)+r2*B2*S(idx)*E(idx))/N-B3*E(idx);%潜伏者迭代
        I(idx+1)=I(idx)+a*E(idx)-(k+y)*I(idx);%感染人数迭代
        R(idx+1)=R(idx)+y*I(idx);%康复人数迭代
        D(idx+1)=D(idx)+k*I(idx);%死亡患者人数迭
    else
        EQ(1:25)=0;
        SQ(1:25)=0;
        S(idx+1)=S(idx)-(r*B*S(idx)*I(idx))/N-(r2*B2*S(idx)*E(idx))/N+B3*(E(idx)+EQ(idx))+lamda*(SQ(idx));%易感人群迭代
        E(idx+1)=E(idx)+(r*B*S(idx)*I(idx))/N-a*E(idx)+(r2*B2*S(idx)*E(idx))/N-B3*E(idx)-lamda*(E(idx));%潜伏者迭代
        I(idx+1)=I(idx)+a*(E(idx)++EQ(idx))-(k+y)*I(idx);%感染人数迭代
        R(idx+1)=R(idx)+y*I(idx);%康复人数迭代
        D(idx+1)=D(idx)+k*I(idx);%死亡患者人数迭
        SQ(idx+1)=SQ(idx)+(r*(1-B))*q*S(idx)*I(idx)/N+(r2*(1-B2))*q*S(idx)*E(idx)/N-lamda*(SQ(idx));%隔离人数迭代
        EQ(idx+1)=EQ(idx)+lamda*(E(idx));%潜伏者隔离人数迭代
    end
end

B={'12-31','01-20','02-09','02-29','03-20','04-09','04-29','05-19','06-08',...
    '06-28','07-17'};
subplot(211)
plot(T,S,T,E,T,I,T,R);
grid on;
hold on;
%plot([25 25],[0 2000]);
%plot([39 39],[0 2000]);
%plot([53 53],[0 2000]);
set(gca,'XTickLabel',B)
xlabel('日期');
ylabel('人数');
legend('易感者','潜伏者','患者','康复者');
subplot(212)
plot(T,D);
set(gca,'XTickLabel',B)
xlabel('日期');
ylabel('人数');
legend('死亡人数');
title('黄石市采取隔离措施传播下的SEIR模型');

% %博客SEIR模型
% %假设第25天开始采取隔离措施(12月31日第一例确诊；...
% %1月23号武汉开始封城，此时其他省市也相应作出响应隔离措施)
% N=2689300;%黄石市人口数
% E=0;%潜伏者
% D=0;%死亡患者人数
% I=1;%感染人数
% S=N-I;%易感人数
% R=0;%康复者人数
% SQ=0;%隔离的疑似病例
% EQ=0;%隔离的潜伏人数
% r=3.14;%感染者接触数量
% B=0.6;%传染概率
% a=1/7;%潜伏者转化为感染者的概率
% r2=3.9;%潜伏者接触人数
% B2=0.03;%潜伏者传染正常人的概率
% y=0.08;%康复概率
% q=1e-9;%隔离比例
% k=0.0093;%日致死率
% B3=0.1;%转阴率
% T=21:200;
% for idx=1:length(T)-1
%         S(idx+1)=S(idx)-r*B*S(idx)*I(idx)/N-r2*B2*S(idx)*E(idx)/N;%易感人群迭代
%         E(idx+1)=E(idx)+r*B*S(idx)*I(idx)/N-a*E(idx)+r2*B2*S(idx)*E(idx)/N;%潜伏者迭代
%         I(idx+1)=I(idx)+a*E(idx)-(k+y)*I(idx);%感染人数迭代
%         R(idx+1)=R(idx)+y*I(idx);%康复人数迭代
%         D(idx+1)=D(idx)+k*I(idx);%死亡患者人数迭
% end
% B={'12-31','01-20','02-09','02-29','03-20','04-09','04-29','05-19','06-08',...
%     '06-28','07-17'};
% subplot(211)
% plot(T,S,T,E,T,I,T,R);
% 
% grid on;
% hold on;
% %plot([25 25],[0 2000]);
% %plot([39 39],[0 2000]);
% %plot([53 53],[0 2000]);
% set(gca,'XTickLabel',B)
% xlabel('日期');
% ylabel('人数');
% legend('易感者','潜伏者','患者','康复者');
% subplot(212)
% plot(T,D);
% set(gca,'XTickLabel',B)
% xlabel('日期');
% ylabel('人数');
% legend('死亡人数');
% title('黄石市自然传播下的SEIR模型');
