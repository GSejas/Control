x = [1 zeros(1,1500)];
k= 1:1500;
y= filter(H.num{1:1},H.den{1:1}, x);
w= filter(algo.num{1:1},algo.den{1:1}, x);

plot(k, y);
plot(k, w);