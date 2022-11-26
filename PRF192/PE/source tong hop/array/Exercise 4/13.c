#include <stdio.h>

int timso(int a[100], int n){

	int min ;
	int count = 0;
	for(int i = 0; i < n; i++) {
    	if(a[i]>0) {
			min = a[i];
			count++;
			break;
		}
    }
    int b = 0 ;
if ( count > 0 ){
    for(int i = 0; i < n; i++) {
		if(a[i] > 0 && a[i] <= min){
			min = a[i];
			b = i ;
            } 
	} 	return b;
	}
	else {
		return -1;
	}	
}



int main () {
	int n;
	do{
	printf("Nhap n (0<n<100) = ");
	scanf("%d",&n);
	}while(n <= 0|| n > 100);
	int a[100];
	for (int i = 0; i < n ; i++){
		scanf ("%d",&a[i]);
	}
	printf ("\nOUTPUT:\n");
	printf ("%d",timso(a,n));
}