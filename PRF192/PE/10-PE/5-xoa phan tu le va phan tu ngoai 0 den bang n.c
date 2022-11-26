//input: 5 6 10 0 9 7 3
//out put: 6 10 9 7
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
int p;
	scanf("%d",&p);
	
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	for(i=p;i<n;i++){
		a[i]=a[i+1];
	}
  	n--;
  	for(i=0;i<n;i++){
  		printf("%d\n",a[i]);
	  }
  
  	




  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
