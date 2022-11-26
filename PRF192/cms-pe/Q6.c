#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	char s[100];
	gets(s);
  	int b=0;
  	int i,j;
  
for(i=0;i<strlen(s);i++){
	if(s[i]=='h'){
				for(j=i+1;j<strlen(s);j++){
					if((s[j]=='a' )&& ((s[j+1]==' ')|| (s[j+1] == NULL))){
						b++;
					
						break;
					}
					if (s[j]==' ')	{
						break;	
					}
				}
			}
			
		}
	
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	
	printf("\n%d",b);







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
