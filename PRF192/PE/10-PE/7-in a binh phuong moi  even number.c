//input: 5 3 5 4 2 7
//output: 16 4


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
int n;
	scanf("%d",&n);
int i,a[n];
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}  
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	for(i=0;i<n;i++){
		if(a[i]%2==0){
			a[i]=pow(a[i],2);
			printf("%d\n",a[i]);
		}
	}
	
	





  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}



