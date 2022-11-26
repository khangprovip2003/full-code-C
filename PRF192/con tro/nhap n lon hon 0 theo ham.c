// nhap 1 so nguyen n>0(sai nhap lai)
#include"stdio.h"
#include"stdlib.h"
void nhapN(int*pn){
	do{
		printf("Nhap so nguyen duong: ");
		scanf("%d",pn);
	}while(pn<=0);
}
void nhapMang(int *a,int n){
	int i;
	for(i=0;i<n;i++){
	printf("a[%d]",i);
	scanf("%d",a+i);
}
}
void xuatMang(int *a,int n){
	for(int i=0;i<n;i++){
		printf("%d\t",*(a+i));
	}
}
int main (){
	int n;
	nhapN(&n);
	int *a;  // chua cap bo nho
//	a=(int*)malloc(sizeof(int))   // cap 4byte
//	a=(int*)malloc(n*sizeof(int));  // cap n * 4byte
	a=(int*)calloc(n,sizeof(int));      

	xuatMang(&a,n);
	free(a);
}