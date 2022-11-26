#include<stdio.h>
int main(){
	int n,k=1;
	do{
		scanf("%d",&n);
	}while(n>=20);
	
	for(int i = 1; i <=n; i++){
		for(int j = i;j<n;j++){
			printf("  ");
			}
			for(int m = 1; m<=i;m++){
				printf("%d ",k);
				k++;
			}
			for(int m = 1 ; m<i;m++){
				printf("%d ",k-2);
				k--;
			}
		
		printf("\n");
	}
}

	
	
