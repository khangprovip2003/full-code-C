// nhap 1 so nguyen n>0(sai nhap lai)
#include"stdio.h"
void nhapN(int*N){
	do{
		printf("Nhap so nguyen duong: ");
		scanf("%d",N);
	}while(N<=0);
}
int main (){
	int n;
	nhapN(&n);
}
