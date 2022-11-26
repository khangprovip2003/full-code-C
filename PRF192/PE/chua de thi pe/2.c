#include<stdio.h>
#include<math.h>
int main(){
	int n,x,s,i;
	scanf("%d %d ",&n, &x);
	s=0;
	
	for(i=1;i<=n;i++){
		s+= pow(-1,i+1)*pow(x,i);
	}
	printf("%d",s);
	return 0;
}

