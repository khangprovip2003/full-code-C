#include <stdio.h>


void chen ( int a[100] , int n , int k , int x){
	for ( int i = n - 1; i > k ; i--){
		a[i] = a[ i - 1];	
	}
	a[k] = x;
}

void sapxep (int a[100], int n){
	for ( int i = 0 ; i < n ; i++){
		for ( int j = i + 1 ; j < n ; j++){
			if ( a[i] > a[j]){	
				int	c = a[i];
				a[i] = a[j];
				a[j] = c;
			}
		}
	}
}
void hien ( int a[100] , int n){
	for ( int i = 0 ; i < n ; i++){
		printf ("%d ",a[i]);
	}
}

int main (){
	int n,x;
	int k = 0;
	int a[100];
	do {
		scanf ("%d",&n);
	}while ( n <= 0 || n > 100);
	
	for ( int i = 0 ; i < n  ; i++){
		scanf ("%d",&a[i]);
	} 
	n++;
//	nhap(a,n);
//	do{
//	printf ("Nhap k: ");
//	scanf ("%d",&k);
//}while ( k < 0 || k > n);
	printf ("Nhap x: ");
	scanf ("%d",&x);
	chen(a,n,k,x);
	sapxep(a,n);
	hien(a,n);
	
	return 0;
}