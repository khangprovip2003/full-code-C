#include <stdio.h>

int main () {
	int n;
	int a[100];
	do{
		scanf ("%d",&n);
	}while ( n <= 0 || n > 100);
	
	for ( int i = 0 ; i < n ; i++){
		scanf ("%d",&a[i]);
	}
	int x;
	printf ("nhap x: ");
	scanf ("%d",&x);
	int count = 0;
	for ( int i = 0; i < n  ; i++){
		if ( a[i] == x){
			for (int j = i; j < n ; j++){
				a[j] = a[j + 1];
			
			}
			count++;
			n--;
			i--;
		}	
		
	}
	if (count == 0){
		printf ("-1");
	}
	
	for ( int i = 0 ; i < n ; i++){
		printf ("%d ",a[i]);
	}
}
//int xoa ( int a[100] , int n , int x ){
//	int count = 0;
//	for ( int i = 0; i < n  ; i++){
//		if ( a[i] == x){
//			for (int j = 0; j < n - 1; j++){
//				a[j] = a[j + 1];
//			
//			}
//			count++;
//			n--;
//			i--;
//		}	
//		
//	}
//	if (count == 0){
//		return -1;
//	}
//
//}
//
//void hien ( int a[100] , int n){
//	for ( int i = 0 ; i < n ; i++){
//		printf ("%d ",a[i]);
//	}
//}
//
//int main (){
//	int n,x;
//	int a[100];
//	do {
//		scanf ("%d",&n);
//	}while ( n <= 0 || n > 100);
//	
//	for ( int i = 0 ; i < n  ; i++){
//		scanf ("%d",&a[i]);
//	} 
//
//	printf ("Nhap x: ");
//	scanf ("%d",&x);
//
//	xoa(a,n,x);
//	hien(a,n);
//	
//	return 0;
//}
