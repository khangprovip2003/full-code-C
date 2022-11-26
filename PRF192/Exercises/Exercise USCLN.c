#include "stdio.h"
int main(){
	int b,a,USCLN;

	printf ("Nhap vao a va b:");
	scanf("\n%d %d",&a,&b);
if ((a==0)&&(b==0)){
	printf ("Khong co USCLN");
}else if(a==b){
	printf ("USCLN1 =%d",a);
}else if ((a==0)||(b==0)){
printf ("USCLN2=%d",a+b);
}else{
	while (a!=b){
		if(a>b){
			a=a-b;
		}else{
			b=b-a;
		}
		USCLN=a;
	}
	printf ("USCLN3=%d",USCLN);	
}

}
