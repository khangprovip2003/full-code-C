#include<stdio.h>
int main(){
	float a,b,c,max;
printf ("nhap vao so a:");
scanf ("%f",&a);
printf ("nhap vao so b:");
scanf ("%f",&b);
printf ("nhap vao so c:");
scanf ("%f",&c);
if (a>b&&a>c){
	max=a;  
	}else if(b>c){
		max=b;
	}else{
	
	max=c;
		
	}
	printf ("maximum between three number is %f",max);
}

