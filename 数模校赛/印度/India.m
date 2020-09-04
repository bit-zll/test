%SEIR模型修正
N=1324000000;
E=9000;%潜伏者
D=63657;%死亡患者人数
I=765143;%感染人数
S=N-I;%易感人数
R=2713933;%康复者人数
r=3;%感染者接触数量
B=0.017;%传染概率
a=0.33;%潜伏者转化为感染者的概率
r2=38;%潜伏者接触人数
B2=0.017;%潜伏者传染正常人的概率
y=0.06;%康复概率
k=0.0006;%日致死率
B3=0.1;%转阴率
T=1:120;
for idx=1:length(T)-1
    %若以9月1日为疫情起点，接种疫苗，此处采用60天后为临界点，
    %相当于60天后，感染者与潜伏者流动性和医疗配置发生明显变化，具体为接触人数
    if idx>= 60
        B=B*0.2;
        B2=B2*0.2;
     
%         r=0.2;%感染者接触数量
%         r2=0.5;%感染者接触人数量
%         y=1;%康复率上升为1
%         a=0.1;%潜伏者转化为感染者的概率
%         k=0.125;%日致死率暂无改变
    end
        S(idx+1) = S(idx) - r*B*S(idx)*I(idx)/N(1) - r2*B2*S(idx)*E(idx)/N+0.5*E(idx);
        E(idx+1) = E(idx) + r*B*S(idx)*I(idx)/N(1)-a*E(idx) + r2*B2*S(idx)*E(idx)/N-0.5*E(idx);
        I(idx+1) = I(idx) + a*E(idx) - y*I(idx)-k*I(idx);
        R(idx+1) = R(idx) + y*I(idx);
        D(idx+1) = D(idx) + k*I(idx);
%     if idx<60
%         S(idx+1)=S(idx)-r*B*S(idx)*I(idx)/N-r2*B2*S(idx)*E(idx)/N;%易感人群迭代
%         E(idx+1)=E(idx)+r*B*S(idx)*I(idx)/N-a*E(idx)+r2*B2*S(idx)*E(idx)/N;%潜伏者迭代
%         I(idx+1)=I(idx)+a*E(idx)-(k+y)*I(idx);%感染人数迭代
%         R(idx+1)=R(idx)+0.05*I(idx);%康复人数迭代
%         D(idx+1)=R(idx)+k*I(idx);%死亡患者人数迭代
%     else
%         S(idx+1)=S(idx)-r*B*S(idx)*I(idx)/N-r2*B2*S(idx)*E(idx)/N+B3*E(idx-10);%易感人群迭代
%         E(idx+1)=E(idx)+r*B*S(idx)*I(idx)/N-a*E(idx)+r2*B2*S(idx)*E(idx)/N-B3*E(idx-10);%潜伏者迭代
%         I(idx+1)=I(idx)+a*E(idx)-(k+y)*I(idx);%感染人数迭代
%         % Y参数有问题
%         R(idx+1)=R(idx)+0.045*I(idx-9);%康复人数迭代
%         D(idx+1)=R(idx)+k*I(idx);%死亡患者人数迭代
%     end
end
plot(T,R,'b',T,I,'r');
grid on;
hold on;
plot([7 7],[0 1000]);
set(gca,'XTick',0:7:120);
set(gca,'XTicklabel',{'9-1','9-8','9-15','9-22','9-29','10-6','10-13','10-20','10-27','11-3','11-10','11-17','11-24','12-1','12-8','12-15','12-22','12-29'});
set(gca,'XTickLabelRotation',40);
xlabel('初始日期为9月1日');
ylabel('人数');
legend('预测累计康复','预测现存病患');
title('印度SEIR预测模型');