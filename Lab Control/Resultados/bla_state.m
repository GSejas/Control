A = [0 1 0; 1962 0 -35.8214 ;0 0 -160.3460];
B = [0;0;66.53];
C = [1 0 0];
D = 0;
[b,a] = ss2tf(A,B,C,D);

r = ones(1,41);

k = 0: 40;
y = filter(b,a,r);
% plot(k,y,o)
stem(k,y,'o','filled')
grid
title(' Unit-Step Response ')
xlabel('k')
ylabel('y(k)')

