#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
 int timmax (int a[]){
 	int max=a[0];
 	int i; 
 		for ( i=1;i<5;i++){
 			if (a[i]%2==0&& max<a[i]){
 				max=a[i];
		 }
	 }
 	return max;
 	}

int main() {
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int a[6],i;
	for( i=0; i<5; i++) {
		scanf("%d",&a[i]);
	}





	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:
	printf("%d",timmax(a));









	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}
