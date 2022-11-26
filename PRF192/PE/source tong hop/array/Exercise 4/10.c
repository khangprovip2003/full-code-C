#include"stdio.h"
	int giatrichandautien (int a[],int n){
		for (int i=0;i<n;i++){
			if(a[i]%2==0){
			return i;
		
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
printf("%d",giatrichandautien(a,n));
}