#include"stdio.h"
int main (){
	float a,b,x;
	printf ("Nhap hai so a,b:");
	scanf("%f%f",&a,&b);
	if (a==0&&b==0){
		printf ("Phuong trinh vo so nghiem");
	}else if(a==0&&b!=0){
		printf ("phuong trinh vo nghiem ");
}else {
		x=-b/a;
	printf ("Nghiem cua phuong trinh ax+b=0 bang %.2f",x)	;
	}
}
 