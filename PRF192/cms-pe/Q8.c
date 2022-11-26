#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
int count = 0 ;
	int a,i;
	scanf ("%d",&a);
	int pow = 2; 
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
		if ( a == 2){
		count++;
		printf ("1");
	}
	if ( a != 2){
	for ( i = 2 ; i <= a ; i++) {
		pow = pow * 2;
			if (pow == a){
				printf ("%d",i);
				count++;
				break;
			}
			
	}
}
	if ( count == 0 ){
		printf ("%d is not power of 2",a);
			}	





  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
