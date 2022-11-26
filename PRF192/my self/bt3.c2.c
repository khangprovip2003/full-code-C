#include <stdio.h>

int main () {
	int h;
	printf ("Enter a number of rows (< 20): ");
	scanf ("%d",&h);
	int k ; 
	int n = 1;	
if ( 0<h && h < 20 ){
	for ( int i = 1  ; i <h  ; i++){ 
		for (int j = 1; j < i  ; j++){ 
						
			printf ("%d ",n); 	
				n++;
		}
		printf ("\n");
	}

}
else {
	printf ("invalid");
}

}