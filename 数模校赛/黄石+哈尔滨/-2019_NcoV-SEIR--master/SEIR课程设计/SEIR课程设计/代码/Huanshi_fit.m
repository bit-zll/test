%SEIRģ������
%�����25�쿪ʼ��ȡ�����ʩ(12��31�յ�һ��ȷ�1��23�ſ�ʼ��ǣ���ʱ����ʡ��Ҳ��Ӧ������Ӧ�����ʩ)
N=2689300;%��ʯ���˿���
E=40;%Ǳ����
D=0;%������������
I=1;%��Ⱦ����
S=N-I;%�׸�����
R=0;%����������
SQ=0;
EQ=0;
beta=0.034;%��Ⱦ��
q=0.001;%�������
c=33.34;%�Ӵ�������Χ[1.6��4.8]
lamda=1/14;%����������
sigma=0.001;%Ǳ��ת���ɸ�Ⱦ����
alpha=0.0306%������
r=0.30;%������
w=0.3;%Ǳ��ת�����׸���Ⱥ����
T=21:100;
for idx=1:length(T)-1
    if idx<13
         S(idx+1)=S(idx)-c*beta*(I(idx)+E(idx))*S(idx)/N;
         E(idx+1)=E(idx)+c*beta*(I(idx)+E(idx))*S(idx)/N-sigma*E(idx);
         I(idx+1)=I(idx)+sigma*E(idx)-(r+alpha)*I(idx);
         R(idx+1)=R(idx)+r*I(idx);
    end
    if idx>=13
        beta=0.003;%��Ⱦ��
        q=0.1;%�������
        c=1.8;%�Ӵ�������Χ[1.6��4.8]
        lamda=1/14;%����������
        sigma=0.001;%Ǳ��ת���ɸ�Ⱦ����
        alpha=0.0306%������
        r=0.33;%������
        w=0.1;%Ǳ��ת�����׸���Ⱥ����
        EQ(1:13)=0;
        SQ(1:13)=0;
        S(idx+1)=S(idx)-c*beta*(I(idx)+E(idx))*S(idx)/N-q*c*(1-beta)*(I(idx)+E(idx))*S(idx)/N+w*EQ(idx);
        E(idx+1)=E(idx)+c*beta*(I(idx)+E(idx))*S(idx)/N-sigma*E(idx)-q*EQ(idx);
        I(idx+1)=I(idx)+sigma*E(idx)-(r+alpha)*I(idx)+sigma*EQ(idx);
        SQ(idx+1)=SQ(idx)+q*c*(1-beta)*(I(idx)+E(idx))*S(idx)/N-lamda*SQ(idx);
        EQ(idx+1)=EQ(idx)+q*c*beta*E(idx)-w*EQ(idx);
        R(idx+1)=R(idx)+r*I(idx);
    end
end
%B={'12-31','01-26','02-09','02-29','03-20','04-09','04-29','05-19','06-08','06-28','07-17'};

%subplot(2,1,1)
plot(T,I);

grid on;
hold on;
clc;
filename='statistic1.xls';
A=xlsread(filename,2,'E2:E61');
C=zeros(86,1);
C(27:86)=A(1:60);
Y=C(1:86);
X=1:length(Y);
plot(X,Y,'r*');
%ha=gca;
%set(ha,'xlim',[26,90])
grid on;
hold on;
% plot([25 25],[0 2000]);
% plot([39 39],[0 2000]);
% plot([53 53],[0 2000]);
% set(gca,'XTickLabel',B)
xlabel('����');
ylabel('����');
legend('��ϻ�������','ʵ������');
title('��ʯ�в�ȡ�����ʩ��SEIR���ģ��');
