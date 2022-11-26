#include <stdio.h>
#include <math.h>

float tich(float a[100], float n){
	int count = 0;
	float s = 1;
	float b = 1;
	for ( int i = 0 ; i < n ; i++){
        if ( a[i] > 0){
            count++;
            s *= a[i]; 
        }
	}
	if ( count != 0){
	b = pow(s,1.0/count);
	}
//	if ( count != 0) {
//		for ( int i = 0 ; i <= 1/count ; i++){
//		b *= s;
//	}

	return b;
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
	printf ("%.3f",tich(a,n));
}