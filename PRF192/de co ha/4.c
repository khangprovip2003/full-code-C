#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
 int n,i,j,m;  
    printf("Enter m:");  
    scanf("%d",&m);  
    printf("Enter n:");
	scanf("%d",&n); 
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:

for( i=1;i<=n;i++)  
    {  
        for( j=1;j<=m;j++)  
        {  
            if(i==1 ||i==n||j==1||j==m)  
            {  
            printf("*");  
            }  
            else  
            printf(" ");  
        }  
        printf("\n");  
    }  
      
    return 0;  



  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
