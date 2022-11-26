#include "stdio.h"

	int  kiemtrasohoanthien (int n){
	int sum=0;
		for(int i=1;i<n;i++){
		if(n%i==0)
			sum+=i;
		if(sum==n){
			return 1;
		}
			
		}
		return 0;
		}
	
	
int timsohoanthiencuoi(int a[], int n)
{
	for(int i = n - 1; i >= 0; i--)
	{
		if(kiemtrasohoanthien(a[i]) == 1)
		{
			return i+1;
		}
	}
	return -1;
}


	void Inputarray(int a[],int n){
   		for (int i=0;i<n;i++){
			printf("a[%d]= ",i);
			scanf("%d",&a[i]);
		}
	}
int main() {
	int a[100];
int n;
	do{
	printf("Nhap n (0<n<100) = ");
	scanf("%d",&n);
	}while(n<=0||n>100);
	Inputarray(a,n);
	
	printf("%d",timsohoanthiencuoi(a,n));
}