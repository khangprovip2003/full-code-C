#include <stdio.h>
int main (){
	float  a,b;
	printf ("nhap hai so :\n");
	scanf ("%f %f",&a,&b);
	if (a>b){
	printf ("Maximun between two number is %f",a);
} else if (b>a){
	printf ("Maximun between two number is %f",b);
}else {
	printf ("both the numbers are equal");
}
	
}