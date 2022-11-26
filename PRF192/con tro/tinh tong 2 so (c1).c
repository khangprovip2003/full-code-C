#include"stdio.h"

int main(){
	int a,b,sum;
	printf("Nhap hai so a ca b:\n");
	scanf("%d%d",&a,&b);
	int *pa,*pb;
	pa=&a;
	pb=&b;
	sum=*pa+*pb;
	
	
	printf("Tong cua hai so a va b :%d",sum);
}