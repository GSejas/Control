R=3.094;
L=14.87e-3;
m=5.81e-3;
g=9.74;

k=17.31e-9;

alpha=2.533;
beta=2.028E-4;
gamma=0.83358;


x1e =2e-2;
ue=(g*m*R*x1e^4)/k;
x2e=0;
x3e=ue/R;
ze=x1e;
ye = (beta)/(x1e^2) + gamma*x3e + alpha;
we=0;

A=[0 1 0; 4*g*(g*m*R)^0.25/(k*ue)^0.25 0 -g*R/ue;0 0 -R/L];
B1= [0;0;0];
B2=[0;0;1/L];
C1=[1 0 0];
C2=[-2*beta*(g*m*R)^0.75/(k*ue)^0.75 0 gamma];
D11 = 0;
D12 = 0;
D21 = 1;
D22 = 0;

[b,a] = ss2tf(A,B2,C2,D22);
