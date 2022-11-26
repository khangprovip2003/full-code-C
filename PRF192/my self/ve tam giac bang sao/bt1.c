#include"stdio.h"
int main(){
	int i,h=4,j,k,b;
	for(i=0;i<h;i++){   // i la so dong
		// phan dau''
		for (j=1;j<=h-i;j++){
			printf("0");
		}
		// dau sao
		for (k=1;k<=(2*i-1);k++){
		
		printf("*");
}
// dau cach
       for (b=1;b<=h-i;b++){
       	printf ("0");
	   }
		printf("\n");
		
	}
// tranh dau cach 
	for (j=1;j<=h-i;j++){
			printf("0");
		}
for (k=1;k<=(2*i-1);k++){
		printf("*");
}
for (b=1;b<=h-i;b++){
       	printf ("0");
	   }
}