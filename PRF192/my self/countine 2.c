// tinh tong toi da 5 so. neu nguoi dung nhap so am thi bo qua ( khong cong so am vao tong)
#include "stdio.h"
int main(){
	int number,sum=0;
	for (int i=1;i<=5;++i){
	
	printf ("Enter a n %d\n",i);
	scanf ("%d",&number);
	if (number<0){
		continue;
	}
	sum+=number;
}
printf  ("\nSum=%d",sum);
}