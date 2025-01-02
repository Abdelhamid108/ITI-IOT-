f1=1; %start frequancy
f2=10; %end frequancy 
fs=100; % sample frequancy
t = 0:1/fs:5;
% Create an up-chirp signal
x_up=chirp(t,f1,5,f2);

% Plot the up-chirp signal and spectrogram
figure;
subplot(2,2,1)
plot(t, x_up);
title('Linear Up-Chirp Signal');
subplot(2,2,2)
spectrogram(x_up,256,250,256,fs,'yaxis')
title('Spectrogram of Up-Chirp Signal');

% Plot the Down-chirp signal and spectrogram
x_down=chirp(t,f2,5,f1);
subplot(2,2,3)
plot(t, x_down);
subplot(2,2,4)
title('Linear Down-Chirp Signal');
spectrogram(x_down,256,250,256,fs,'yaxis')
title('Spectrogram of Down-Chirp Signal');

