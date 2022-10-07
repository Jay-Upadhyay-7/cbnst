#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	printf("enter total coefficients : ");
	scanf("%d",&n);
	float a[n][n+1];
	for(int i=0;i<n;i++){
		for(int j=0;j<=n;j++){
			scanf("%f",&a[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		if(a[i][i] == 0.0){
			printf("\nMathematical Error!");
			exit(0);}
			
		for(int k=0;k<n;k++){
			if(i!=k){
		     float x=a[i][i];
		     float y=a[k][i];
		     for(int j=0;j<=n;j++){
			  a[k][j]=a[k][j] -  a[i][j]*(y/x);
		 }
	   }
	  }
}
float ans[n];
for(int i=0;i<n;i++){
	a[i][n]=a[i][n]/a[i][i];
	ans[i]=a[i][n];
	a[i][i]=a[i][i]/a[i][i];
}
    printf("\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<=n;j++){
			printf("%f ",a[i][j]);
		}
		printf("\n");
	}
for(int i=0;i<n;i++){
	printf("\na[%d] : %f ",i,ans[i]);
}
}
