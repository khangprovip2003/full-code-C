#include"stdio.h"
int main (){
	int i,n;
	int sum=0;
	printf ("Enter n to find sum of all even number between 1 to n:");
 scanf ("%d",&n);
 for (i=2;i<=n;i+=2){
 	sum+=i;
 }
 printf ("%d",sum);
}