#include "stdio.h"

	void  printflist (float a[],int n){
	
		for(int i=0;i<n;i++){
		if(a[i]<0){
			printf ("%d",i);
		}
		
		}
	
	}



	void Inputarray(float a[],int n){
   		for (int i=0;i<n;i++){
			printf("a[%d]= ",i);
			scanf("%f",&a[i]);
		}
	}
int main() {
	float a[100];
int n;
	do{
	printf("Nhap n (0<n<100) = ");
	scanf("%d",&n);
	}while(n<=0||n>100);
	Inputarray(a,n);
	printflist(a,n);
}