#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int a[6];
	int i,j;
	for( i=0; i<5; i++) {
		scanf("%d",&a[i]);
	}
	

  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
for( i=0; i<4; i++) {
		for( j=i+1;j<5;j++){
			if( a[i]>a[j]){
				int tmp=a[i];
					a[i]=a[j];
					a[j]=tmp;
			
			}
		}
		i++;
}

for( i=0;i<5;i++){
	if(a[i]  > 0)
	printf ("%d\n",a[i]);
}







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
