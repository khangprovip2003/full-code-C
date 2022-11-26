#include "stdio.h"
int main (){
	int i,n,sum1=0,sum2=0,sum3=0;
	printf ("Nhap vao n:");
	scanf("%d",&n);
for(i=1;i<=n;i++){
			sum1+=i;
			if (i%2==0){
			sum2+=i;
				}else{
					sum3+=i;
				}
		}
		printf ("\nTong cac so tu nhien:%d",sum1);
		printf ("\nTong cac so tu nhien chan :%d",sum2);
		printf ("\nTong cac so tu nhien le:%d",sum3);
		
		
	}
	
	

