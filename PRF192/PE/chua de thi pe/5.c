#include<stdio.h>
#include<math.h>
int check_prime (int n){
	int i,loop=sqrt(n);
	for(i=2;i<=loop;++i)
		if(n%i == 0)
			return 0;
	return n>1;
}

int main(){
int a[10000],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
}
	for(i=0;i<n;i++)
		
		if(check_prime(a[i])==1){
			printf("%d",i);
			break;
		}
	
	if(i==n){
		printf("-1");
	}
	return 0;
}

