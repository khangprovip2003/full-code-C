#include "stdio.h"
int main (){
	int n;
	int sum=0;
	printf ("Enter n to find sum of  natural numbers between 1 to n:");
	scanf ("%d",&n);

	int i=0;
	while (i<=n){
		
		sum=sum+i;
		i++;}
		printf ("\n%d",sum);
	
}