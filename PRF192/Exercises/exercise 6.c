#include <stdio.h>
int main (){
	int year;
	printf ("Enter to check a year is leap year or not :");
	scanf ("%d",&year);
	if ((year%4==0 && year%100!=0)||(year%400==0)){
		printf ("This is leap year"); 
	}else{
		printf ("This is not leap year ");
	}
	
}