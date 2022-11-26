#include <stdio.h>
int main (){
	float a;
	printf ("Enter the number :");
scanf ("%f",&a);

if (a<0){
	printf ("number is negative ");
}else if (a>0){
	printf ("number is positive " );
}else {
	printf ("number is zero");
}
}