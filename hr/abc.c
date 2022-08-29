#include<stdio.h>
int main(){
  float tVal,aVal;
  printf("Enter True and absolute value \n");
  scanf("%f%f",&tVal,&aVal);
  float abError,relError,perError;
  if(tVal>aVal){
    abError=tVal-aVal;
   }
  else{
    abError=aVal-tVal;
    }
  relError=abError/tVal;
  perError=relError*100;
  
  printf(" Absolute error : %f \n Relative Error %f \n Percentage eror %f: \n" , abError,relError,perError);
  return 0;
  
  }
    
