#include<stdio.h>
 int main(){
	int a[50],n,i,x,count=0;
	double sum=0,aver;
	do{
		printf( "Nhap vao so luong phan tu n (0<n<=50):");
		scanf("%d",&n);
		}while(n<1||n>=50);
	for(   i=0;i<n;i++){
	
	printf("\na[%d]=",i);
	scanf("%d",&a[i]);
    }
printf ("Nhap so x bat ky: ");
scanf("%d",&x);                  
for (  i=0;i<n;i++){
	if(a[i]>x){
		sum+=a[i];
		count++;
	}
}

aver=sum/count;
printf("%0.2lf", aver);
}