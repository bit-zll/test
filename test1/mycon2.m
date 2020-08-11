function [C,Ceq] = mycon2(x)
C = [1.5+x(1)*x(2)-x(1)-x(2); -x(1)*x(2)-10];
Ceq =[];    %没有非线性等式约束
