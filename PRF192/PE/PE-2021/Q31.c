#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:

int i,a[1000];
	
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
		fflush(stdin);
	}  
int j;
	for(i=0;i<5;i++){
		for(j=i+1;j<5-1;j++){
			if(a[j]<a[i]){
				int tmp=a[j];
					a[j]=a[i];
					a[i]=tmp;
			}
				
		}	
		
	}
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	for(i=0;i<6;i++){
		if (a[i] % 2 !=0){
			printf("%d\n",a[i]);
		}
	}




  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
