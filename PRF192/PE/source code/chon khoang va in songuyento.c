#include<stdio.h>
int checkPrime (int number){
	int i;
	for( i=2 ;i<number/2; i++){
		if(number % i==0){
			return 0;
		}
	}
	return 1;  //la so nguyen to
}
void display(int n){
	int i;
	for(i=100;i<n;i++){  // thay doi khoang 100
		if(checkPrime(i) ==1 ){
			printf("%d ",i);
		}
	}
	
}
int main(){
	int n;
	scanf("%d",&n);
	printf("OUTPUT: ");
	display(n);
}

