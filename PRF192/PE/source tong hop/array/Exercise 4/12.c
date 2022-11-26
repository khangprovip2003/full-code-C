#include "stdio.h"
	float  printflist (float a[],int n){
	float max=a[0];
		for(int i=0;i<n;i++){
		if(a[i]>0 && max<a[i]){
			max=a[i];
			return max;
		}
		}
		return -1;
		
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
   printf("%f",printflist(a,n));
}