#include"stdio.h"
#include "math.h"
int main(){

float a,b,c,dental,x1,x2;
printf("Nhap a,b,c=:");
scanf("%f%f%f",&a,&b,&c);
dental=b*b-4*a*c;
if (a==0&&b==0&&c!=0){
		printf ("Phuong trinh vo  nghiem");
	}else if(a==0&&b!=0){
		x1=-c/b;
		printf ("phuong trinh co nghiem  %f ",x1);
}else if (a==0&&b==0&&c==0){

	
	printf ("Phuong trinh vo so nghiem");
	}
else {

if (dental<0){
	printf ("phuong trinh vo nghhiem ");
	}else if (dental==0){
		x1=-(b/2)*a;
		printf ("Phuong trinh co nghiem kep =%f",x1);
	}else {
x1=((-b+sqrt(dental))/(2*a));
x2=((-b-sqrt(dental))/(2*a));
printf ("Phuong trinh co hai nghiem %f va %f",x1,x2);
}
}
}