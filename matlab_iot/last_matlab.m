clc; clear;
figure;

% Define SNR range
snr = 0:20;

% Loop over different modulation orders (4-QAM and 16-QAM)
for M = [4, 16]
    ber = [];  % Initialize array to store BER values
    
    % Generate random data symbols according to the modulation order
    x = randi([0 M-1], 100000, 1); 

    % Set modulation mapping (binary or Gray)
    sysOrder = 'gray'; % Use 'bin' for binary mapping, or 'gray' for Gray coding

    % Loop over each SNR value
    for snr_value = snr
        % Modulate the data using QAM
        symbols = qammod(x, M, sysOrder); 
        
        % Pass the modulated symbols through an AWGN channel
        n_symbols = awgn(symbols, snr_value, 'measured');
        
        % Demodulate the received symbols
        d_symbols = qamdemod(n_symbols, M, sysOrder); 
        
        % Calculate the BER
        ber_value = symerr(x, d_symbols) / length(x); 
        
        % Store the BER value
        ber = [ber ber_value]; 
    end
    
    % Plot BER vs. SNR on a logarithmic scale
    semilogy(snr, ber, 'LineWidth', 2); 
    hold on;
end

% Add labels, title, and legend
xlabel('SNR (dB)'); 
ylabel('BER'); 
title('BER vs. SNR for QAM Modulation (Gray Coding)');
legend('4-QAM', '16-QAM');
grid on;
hold off;
