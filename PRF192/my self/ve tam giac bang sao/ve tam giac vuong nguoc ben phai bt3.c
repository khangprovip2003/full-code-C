//    *
//   **
//  ***
// **** 
//*****

#include"stdio.h"
int main(){
	int h,i,a,k=1,b;
		printf ("nhap kich thuoc h:");
		
 scanf("%d",&h);
	
	
	while(k<h){         // xoa dau" = "
	a=h-k;
	for(i=1;i<=a;i++){
		printf(" ");
	}
	b=k;
	for(i=1;i<=b;i++){
		printf("*");
	}
	printf("\n");
	k++;
}
k=h;
	a=h-k;                   // dinh dang dung hon
	for(i=1;i<=a;i++){
		printf(" ");
	}
	b=k;
	for(i=1;i<=b;i++){
		printf("*");
}
}