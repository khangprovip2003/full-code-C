#include <stdio.h>
int main (){
	int a;
hello:

	printf("Enter the number:");
	scanf("%d",&a);
if(a>=0) 
goto hello;
	printf ("hello");
}