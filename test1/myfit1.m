function f = myfit1(x,xdata)
    f = x(1)+x(2)*exp(-0.02*x(3)*xdata)
