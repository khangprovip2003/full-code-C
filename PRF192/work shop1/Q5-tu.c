#include"stdio.h"

int main(){
	int a,b,i,result=1;
	printf ("Enter the number:");
	
	scanf ("%d %d",&a,&b);
	for(i=1;i<=b;i++){
		result=result*a;
	}
	printf("ketqua=%d",result);
}