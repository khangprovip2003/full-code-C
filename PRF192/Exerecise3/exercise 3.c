#include"stdio.h"
int main(){
	float n,i,sum=0;
	printf ("Enter the number:");
	scanf ("%f",&n);
	for(i=1;i<=n;i++){
		sum+=1/i;
}
printf ("Tong S:%f",sum);
}