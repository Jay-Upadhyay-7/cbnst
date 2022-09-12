#include<stdio.h>
#include<math.h>

float f(float x){
  return (x*x*x)-(5*x)+1;
  }
  int main(){
  float a,b,err;
  printf("enter value of a and b");
  scanf("%f%f",&a,&b);
  if(f(a)*f(b)<0){
    scanf("%f",&err);
    float x=a-((b-a)/(f(a)-f(b)))*f(a);
    while(fabs(f(x))>err){
    if(f(a)*f(x)<0)
    b=x;
    else if(f(x)*f(b)<0){
    a=x;}
    x=a-((b-a)/(f(a)-f(b)))*f(a);
    printf("x = %f f(x) = %f\n",fabs(x),f(x));}
     printf(" answer x = %f \n",fabs(x));}
    else{
    printf("Range is incorrect \n");
    }
    return 0;

  }
