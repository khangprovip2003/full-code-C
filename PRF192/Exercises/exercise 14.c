#include<stdio.h>
int main (){
	int cp,sp,profit,loss;
	printf("Cost price:");
	scanf("%d",&cp);
	printf ("selling price:");
	scanf("%d",&sp);
	if(sp>cp){
		profit=sp-cp;
		printf("Profit is %d",profit);
	}else if(cp>sp){
		loss=cp-sp;
		printf("Loss is %d",loss);
	}else{
		printf("No profit and no loss");
	}
		
		}