[A,B,C,D]=ssdata(m1);
ss2tf(A,B,C,D);
[b,a] = ss2tf(A,B,C,D);
 H = tf(b,a);