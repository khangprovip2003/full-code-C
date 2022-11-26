#include "stdio.h"
int main (){
int n,i;
printf ("Enter the number:");
scanf ("\n%d",&n);
if (n<=0){
	printf ("Nhap sai");
}
else {
	
	for (i=n;i>=1;i--)
		printf ("\n%d",i);
}
}
