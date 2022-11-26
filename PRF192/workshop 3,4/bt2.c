#include"stdio.h"

int main(){
	double a,b,rec;
	do{
	
printf("Nhap hai so a v b:");
scanf("%lf %lf", &a,&b);
}while(a<=0||b<=0);



	rec=a*b;
printf ("The area  of the rectangular:%.2lf",rec);
}






