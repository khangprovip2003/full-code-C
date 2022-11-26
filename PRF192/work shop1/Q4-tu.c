#include "stdio.h"
int main(){
	int a,b;
	int tich=1;
printf("Enter the interger  number a and b :");
	scanf("%d %d",&a,&b);
 if(a>0&&a<=10&&b>0&&b<=10){
 	
	 
 

		if(a>b){
		
			int tmp =a;
			a=b;
			b=tmp;
		}
			for (int i=a;i<=b;i++){
				 if (i%2!=0){
				tich*=i;
			}
		}
	
			
	
	printf ("value=%d",tich);
}else{
	printf("Enter a value that does not satisfy the condition");
}
	
	
}