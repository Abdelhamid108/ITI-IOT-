
% problem 1 :
%
%generate a vector of random values between 0 and 1 ,size of the vector is 1x100
randi( [0 1] , 1,100 );
%repeat each element in the vector 3 times
repeated_vector = reshape(repmat(vector, 3, 1), 1, []);
%[1 0 0 1 1] ---> [1 1 1 0 0 0 0 0 0 1 1 1 1 1 1   ]
%----> repmat & reshape

% 2-)
%split the figure into 2 graphs
%note make the step 0.01 and duration 0:2*pi
%plot sin and cos on the same graph using subplot and hold
%in the second subplot , plot tan() using plot and stem hold on
%
f=2;
Ts=0.01;
n=0:Ts:2*pi;

figure;

subplot(2, 1, 1);
plot(n,sin(n*f))
hold on
plot(n,cos(n*f))
hold off
subplot(2, 1, 2);
plot(n,tan(n*f))
hold on 
stem(n,tan(n*f))
hold off







