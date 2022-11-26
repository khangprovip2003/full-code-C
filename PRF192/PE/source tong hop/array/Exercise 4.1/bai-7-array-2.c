#include <stdio.h>

int kiemtra ( int n){
	while (n >= 10){ //2456 245 24 2 
		n /= 10 ;
	}
	
	if ( n % 2 == 0) { 
		return 1;
	}
	else {
		return 0;
	}
}

int tong (int a[100] , int n ) {
	int sum = 0; 
	for (int i = 0 ; i < n ; i++){
		if ( kiemtra(a[i]) == 1){
			sum += a[i];
		}
	} return sum;	
}

int main (){
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
