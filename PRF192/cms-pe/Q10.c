#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int i, n;
   	int prime = 1;
   	scanf("%d", &n);
   	for(i = 2; i < sqrt(n); i++) {
    	if((n % i) == 0) {
    	    prime = 0;
   	    }
    }

    

  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
    if (prime == 1)
    	printf("0x%X", n);
   	else
      	printf("%d is not a prime n.", n);







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
