clc
clear
close all

f=2;
Ts=0.1;
n=0:Ts:2*pi;
Xn=sin(n*f);

figure;
subplot(2,1,1 )
plot(n,Xn,"LineWidth",5)
hold on
stem(n,Xn)
hold off
subplot(2,1,2 )
plot(n,Xn,"LineWidth",2,"Color",'k','LineStyle','--')
xlabel("Discrete time index");
ylabel("Sin");




