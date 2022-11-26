#include "stdio.h";
int main (){
	int i,n;
	int sum=0;
	printf ("Enter n to find sum of all the natural number between 1 to n:  ");
	scanf ("%d",&n);
	for(i=1;i<=n;i++){
	sum=sum+i;   // or sum += i;

}
	printf ("%d",sum);
}