#include <stdio.h>

float tong(float a[100], int n ){
	int count = 0;
	float s = 0;
	float b;
	for ( int i = 0 ; i < n ; i++){
        if ( a[i] > 0){
            count++;
            s += a[i]; 
        }
	} 
	if ( count != 0){
		b = s/count;
	}
	if ( count == 0 ){
		return -1;
	}

}
int main () {
	int n;
	float a[100];
	do{
		scanf ("%d",&n);
	}while ( n <= 0 || n > 100);
	
	for ( int i = 0 ; i < n ; i++){
		scanf ("%f",&a[i]);
	}
	printf ("%.2f",tong(a,n));
}