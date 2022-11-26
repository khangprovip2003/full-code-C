#include<stdio.h>
int main()
{
	int a,b,temp,i,tich=1;
	printf("Nhap a:");
	scanf("%d",&a);
	printf("Nhap b:");
	scanf("%d",&b);
	if(a>b){
		temp = a;
		a = b;
		b = temp;
	}
	for(i = a;i <= b;i++){
		if(i % 2 == 1){
			tich = tich * i;
		}
	}
		printf("%d",tich);	
		return 0;
	
}

