#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	
	int a[100];
	int i;
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(i = 0; i < n; i = i+2){
		if(a[i] %2 == 1){
			printf("%d\n", a[i]);
		}
	}
	return 0;
}

