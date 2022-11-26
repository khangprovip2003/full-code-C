#include"stdio.h"
#define MAX 1000
int main(){
int a[MAX];
printf("\nNhap 5 phan tu: ");

	for (int i = 0; i < 5; i++)
		scanf("%d", &a[i]);
int sum=0,*p;
for(p=&a[0];p<&a[5];p++)
	sum+= *p;

printf("SUM=%d",sum);
}