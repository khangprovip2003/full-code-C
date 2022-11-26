#include <stdio.h>

//void nhap(int a[100] , int n ){
//	do {
//		scanf ("%d",&n);
//	}while ( n <= 0 || n > 100);
//	
//	for ( int i = 0 ; i < n  ; i++){
//		scanf ("%d",&a[i]);
//	} 
//	n++;
//}	

void chen ( int a[100] , int n , int k , int x){
	int i;
	for (  i = n - 1; i > k ; i--){
		a[i] = a[ i - 1];	
	}
	a[k] = x;
}

void hien ( int a[100] , int n){
	int i;
	for (  i = 0 ; i < n ; i++){
		printf ("%d ",a[i]);
	}
}

int main (){
	int n,k,x,i;
	int a[100];
	do {
		scanf ("%d",&n);
	}while ( n <= 0 || n > 100);
	
	for (  i = 0 ; i < n  ; i++){
		scanf ("%d",&a[i]);
	} 
	n++;
//	nhap(a,n);
	do{
	printf ("Nhap k: ");
	scanf ("%d",&k);
}while ( k < 0 || k > n);
	printf ("Nhap x: ");
	scanf ("%d",&x);
	chen(a,n,k,x);
	hien(a,n);
	
	return 0;
}
