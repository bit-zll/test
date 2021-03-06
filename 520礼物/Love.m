clc;clear;
a=0;
x=-2:0.01:2;
writerObj=VideoWriter('��,avi');
writerObj.FrameRate=20;
open(writerObj);
figure(1);
set(gcf,'position',[0,0,800,600],'color','w');
for i=1:200;
    str_title=strcat('\color{red}a=',num2str(a));
    y=abs(x).^(2/3)+(0.9*sqrt((3.3-x.^2))).*sin(a*pi*x);
    a=i/10;
    figure(i);
set(gcf,'position',[0,0,800,600],'color','w');
p1=plot(x,y,'r','LineWidth',3);hold on;
title('\color{red}f(x)=x^2^/^3+e/3*(pi-x^2)^1/^2*sin(a*pi*x)','fontsize',15);
text(-0.2,2.3,str_title,'FontName','Time New Roman','FontSize',20);
xlim([-2 2]);
ylim([-1.5 2.5]);
frame=getframe(gcf);
     writeVideo(writerObj,frame);
     close(figure(i));
     clf;
end;
close(writerObj);
