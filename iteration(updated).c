#include<stdio.h>
#include<math.h>
float f(float x)
{
	return cos(x)-3*x+1;
}
float g(float x){
	return (1+cos(x))/3;
}
float gdes(float x){
	return -sin(x)/3;
}
int main()
{
	float x0,x;
	scanf("%f",&x0);
	if(gdes(x0)<1){
		x=g(x0);
	
	while(fabs(x0-x)>0.001){
		printf("\nx= %f f(x)=%f ",x,f(x));
		x0=x;
		x=g(x);
	}
	printf("\nx= %f f(x)=%f ",x,f(x));
}
return 0;
}
