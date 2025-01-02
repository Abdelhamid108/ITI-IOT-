clc
clear
sym=randi([0 1],1,5);
fc=1;
fs=40*fc;
ts=1/fs;
t=0:ts:2*pi;
x=sin(t*fc);
figure;
sig_tot=[];
for r=sym
    if r==1
        sig_tot=[sig_tot x];
    else
         sig_tot=[sig_tot -1*x];
    end
end
plot(sig_tot)


        