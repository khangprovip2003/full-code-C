#include<stdio.h>
unsigned long long frac(int n){
	if(n == 0 || n == 1) return 1;
	int i;unsigned long long product = 1;
	for(i = 2; i <= n; i++){
		product *= i;
	}
	return product;
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%lld", frac(n + 1));
	return 0;
}

