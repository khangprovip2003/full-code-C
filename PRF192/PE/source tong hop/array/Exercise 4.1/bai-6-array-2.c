#include <stdio.h>

int hangchuc(int n) {
	
	n = n / 10;
	
	int a = n % 10;
	if(a == 5){
		return 1;
	}
	return 0;
}
int tong (int a[100] , int n){
	int sum = 0;
	for (int i = 0 ; i < n ; i++){
		if ( hangchuc(a[i]) == 1){
			sum += a[i];
		}
	} return sum;	
}
int main () {
	int n;
	int a[100];

	do{
		scanf ("%d",&n);
	}while ( n <= 0 || n > 100);
	
	for ( int i = 0 ; i < n ; i++){
		scanf ("%d",&a[i]);
	}
	printf ("%d",tong(a,n));
}