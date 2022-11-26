//in put:
//	6 3 1 6 2 10\
//out put :
//	24
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
int a[6],i,sum=0;
	for(i=0;i<6;i++){
	scanf("%d",&a[i]);
	}
	for(i=0;i<6;i++){
		if(a[i]%2==0){
			sum+=a[i];
		}
   }
   
   
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	printf ("%d",sum);	




  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
