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

void xoa(int a[100], int n, int k){
	for(int i = k; i < n ; i++){
		a[i] = a[i+1];
	}

}
void hien ( int a[100] , int n){
	for ( int i = 0 ; i < n ; i++){
		printf ("%d ",a[i]);
	}
}

int main (){
	int n,k;
	int a[100];
	do {
		scanf ("%d",&n);
	}while ( n <= 0 || n > 100);
	
	for ( int i = 0 ; i < n  ; i++){
		scanf ("%d",&a[i]);
	} 
	n--;
//	nhap(a,n);
	do{
	printf ("Nhap k: ");
	scanf ("%d",&k);
}while ( k < 0 || k > n);
	xoa(a,n,k);
	hien(a,n);
	
	return 0;
}