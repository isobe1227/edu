#include <stdio.h>
#include <math.h>
int main(void)
{
	double dt,t,th,w=0,al,tl,h=3.65,m=2.34,i=38.072,g=9.8,k=0;
	dt=0.01; // time step
	t=0.0;th=0.0253;w=0; // initial values
	while(t<10.0){
		printf("%e,%e\n",t,h*sin(th));
		tl = -h*m*g*sin(th)-h*k*h*w;
		al = tl/i;
		t+=dt;th+=w*dt;w+=al*dt;
	}
	
	return(0);
}
