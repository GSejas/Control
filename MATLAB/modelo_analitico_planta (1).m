R=2.75;
L=14.87e-3;
m=5.81e-3;
g=9.74;

k=2.108e-5;
km=1.35706E-09;
 
alpha=2.533;
beta=2.028E-4;
gamma=0.83358;


x1e =2e-2;
ue= ((R*x1e^2)/(k))*(g*m-km*x1e^-4);
x2e=0;
x3e=ue/R;
ze=x1e;
ye = (beta*x1e^-2) + gamma*x3e + alpha;
we=0;


A=[0 1 0; (4*km)/(m*x1e^5) + (2*k*x3e)/(m*x1e^3), 0, -k/(m*x1e^2);0 0 -R/L];
B1= [0;0;0];
B2=[0;0;1/L];
C1=[1 0 0];
C2=[-(2*beta)/x1e^3, 0, gamma];
D11 = 0;
D12 = 0;
D21 = 1;
D22 = 0;

[b,a] = ss2tf(A,B2,C2,D22);
h=tf(b, a);

% Kp=8.01e+06;
% Kd=5e4;
% PD=pid(Kp,0,Kd);
% 
% T=feedback(h*PD, 1);
% t = 0:0.0001:5;
% %pidtool(h,PD);
% step(T,t);
% rlocus(T);
