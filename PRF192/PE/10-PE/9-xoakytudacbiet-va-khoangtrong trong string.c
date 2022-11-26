#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	char s[101];
	int i;
	gets(s);
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
for ( i = 0 ; i < strlen(s) ; i++){
		if (s[i] >= 'a' && s[i] <= 'z' || s[i]>='A' && s[i] <= 'Z'){
				printf("%c",s[i]);
			}
		}
	

 
	
	





  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
