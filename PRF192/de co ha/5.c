#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
char s[4],i,j;
	printf ("Enter string:"); 
	gets(s);
for(i=0;i<strlen(s)-1;i++){
	for(j=i+1;j<strlen(s);j++){
		int tmp = s[i];
			s[i]=s[j];
			s[j]=tmp ;
		
	}
}
 		strlen(s)++;
 
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	printf("The new string:%s",s); 
	 




  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
