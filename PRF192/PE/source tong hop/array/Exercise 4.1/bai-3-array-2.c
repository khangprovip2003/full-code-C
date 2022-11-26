#include <stdio.h>

int main (){
	int n;
	int a[100];
	do{
		scanf ("%d",&n);
	}while ( n <= 0 || n > 100);
	
	for ( int i = 0 ; i < n ; i++){
		scanf ("%d",&a[i]);
	}
		int count = 0;
	for (int i = 0; i <= n; i++) {
			if (a[i] < 0) {
				for (int k = i; k < n ; k++) {
					a[k] = a[k+1];  
	
				}
				count++;
				n--;	 
				i--;
			}		
	}
	if ( count == 0 ){
		printf ("-1");
	}
	 
	for ( int i = 0; i < n; i++){
		printf ("%d ",a[i]);
	}
	
}

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

//int xoa ( int a[100] , int n ){
//	int count = 0;
//	for (int i = 0; i <= n; i++) {
//			if (a[i] < 0) {
//				for (int k = i; k < n ; k++) {
//					a[k] = a[k+1];  
//	
//				}
//				count++;
//				n--;	 
//				i--;
//			}		
//	}
//	if ( count == 0 ){
//		return -1;
//	}
//}
//
//void hien ( int a[100] , int n){
//	for ( int i = 0 ; i < n ; i++){
//		printf ("%d ",a[i]);
//	}
//}
//
//int main (){
//	int n;
//	int a[100];
//	do {
//		scanf ("%d",&n);
//	}while ( n <= 0 || n > 100);
//	
//	for ( int i = 0 ; i < n  ; i++){
//		scanf ("%d",&a[i]);
//	} 
//	
////	nhap(a,n);
//	xoa(a,n);
//	hien(a,n);
//	
//	return 0;
//}
