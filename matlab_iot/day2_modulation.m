figure;
SNR=-10:1:20;  % db % signalpower / noisepower
for M=[2,4,16]
ber = [];
for t=1:length(SNR)
x=randi([0 1],10000,1);
Eb=((M-1)*(dmin^2))/(6*log2(M));
symbols=qammod(x,M,'InputType',"bit");
%plot(real(symbols), imag(symbols), '+',"LineWidth",2);
snr_linear=10^(SNR(t)/10);
No=Eb/snr_linear;
Noise=sqrt(No/2 )*(  randn(size(symbols))  + 1i *  randn(size(symbols))  );
rxdata=symbols+Noise;
%plot(real(rxdata), imag(rxdata), '+',"LineWidth",2);
zz=qamdemod(rxdata,M,'output',"bit");
no_errors=sum(x~=zz);
ber(t)=no_errors/length(x);
end
semilogy(SNR, ber, 'o-', 'LineWidth', 2, 'DisplayName', ['M = ' num2str(M)]);
hold on
end
xlabel('SNR (dB)');
ylabel('Bit Error Rate (BER)');
legend show;
grid on;
hold off
