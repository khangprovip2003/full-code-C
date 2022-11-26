#include <stdio.h>
void sum(int n){
	int sum1=0,sum2=0,sum3=0;
for(int i=1;i<=n;i++){

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
int main (){
int n;
	scanf ("%d",&n);
	
		sum(n);	
		

		
		
	}