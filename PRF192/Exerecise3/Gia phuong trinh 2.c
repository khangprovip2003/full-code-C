#include"stdio.h"
int main(){
	float x,f1,f2;
	printf ("Nhap gia tri x de tinh F(x):");
	scanf ("%f",&x);

	
	if(x>=5){
		f1= 2*x*x+5*x+9;
		printf ("Gia tri cua f(x):%2.f",f1);
		
	}
	
	else {
		f2= -2*x*x+4*x-9;
		printf ("Gia tri cua f(x):%2.f",f2);
	}
	
	
	
	
	
}