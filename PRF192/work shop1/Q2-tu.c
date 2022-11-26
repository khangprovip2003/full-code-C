#include"stdio.h"
#define PI 3.14
int main(){
float r,chuvi;
printf ("Enter R:");
scanf("%f",&r);
if(r>0){

chuvi=2*r*PI;
printf ("perimeter of the circle  %.2f",chuvi);
}else{
	printf ("ERROR-Please enter r >0");
}

}