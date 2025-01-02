clc
clear

M=2; %modulation order
% generate symbols 
bits=randi([0 1],1,100);
%Modulate the data symbols.
m_symbols = pskmod(bits,M);
%plot the constellation.
figure;
scatterplot(m_symbols)
%Demodulate the received signals.
dm_symbols = pskdemod(m_symbols,M);
%compute the number of symbol errors.
numErrs = symerr(bits,dm_symbols)




