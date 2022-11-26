#include<stdio.h>
#include<math.h>
int Primenumber(int x){
	if(x<2) return 0;
		for(int i=2;i<=sqrt(x);i++){
			if(x%i==0) return 0;
		}
	return 1;
}
void Inputarray(int a[],int n){
   	for (int i=0;i<n;i++){
		printf("a[%d]= ",i);
			scanf("%d",&a[i]);
	}
}
int Countprime(int a[],int n){
	int count=0;
	for(int i=0;i<n;i++){
		if(Primenumber(a[i])==1 && a[i]<100)
		count++;
	}
	return count;
}
int main(){
	int n;
	int a[100];
	do{
	printf("Nhap n = ");
	scanf("%d",&n);
	}while(n<=0||n>100);
	Inputarray(a,n);
	int p=Countprime(a,n);
	printf("Countprimenumber:%d",p);
		return 0;
}