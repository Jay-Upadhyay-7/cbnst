#include<stdio.h>
#include<math.h>
float f(float x)
{
	return cos(x)-3*x+1;
}
float fdes(float x){
	return -sin(x)-3;
}
int main()
{   
    //interval
    float a,b;
    scanf("%f %f ",&a,&b);
    if(f(a)*f(b)>0){
    	return 0;
	}
	//guess root bw interval
	float x0,x;
	scanf("%f",&x0);
	if(fdes(x0)!=0){
		x=x0-f(x0)/fdes(x0);
	
	while(fabs(x0-x)>0.001){
		printf("\nx= %f f(x)=%f ",x,f(x));
		x0=x;
		x=x0-f(x0)/fdes(x0);
	}
	printf("\nx= %f f(x)=%f ",x,f(x));
}
return 0;
}
