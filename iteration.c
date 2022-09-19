#include<stdio.h>
#include<math.h>

#define   f(x)   cos(x)-3*x+1
#define   O(x)   (1+cos(x))/3
#define differentiate(x)  -sin(x)/3

int main()
{
	 
	 float x0, x1, e;
	 /* Inputs */
	 printf("Enter initial guess: ");
	 scanf("%f", &x0);
	  if(fabs(differentiate(x0))<1)
        printf("Function Form is Correct. Iteration Method can be applied\n");
      else{
        printf("Function Form is NOT Correct. Iteration Method CAN'T be applied\n");
        return 0;
    }
	 printf("Enter tolerable error: ");
	 scanf("%f", &e);
	 printf("\tx0\t\tf(x0)\t\tx1\t\tf(x1)\n");
	 do{
		  x1 = O(x0);
		  printf("%f\t%f\t%f\t%f\n", x0, f(x0), x1, f(x1));
		 //prev=x0;
		  x0 = x1;
	 }while( fabs(f(x1)) > e); //or while( fabs(prev-x0) > e);
	 printf("\nRoot is %f", x1);
	 return(0);
}
