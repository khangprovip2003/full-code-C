#include"stdio.h"
int inputlist (int a[],int n){
	int b;
	for (int i=0;i<n;i++){
		if (a[i]<0){
		b=i;
		}
	}
	return b;
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

inputlist (a,n);
printf ("vi tri ma gia tri do la gia tri am la  la %d",inputlist(a,n));
}

	
		