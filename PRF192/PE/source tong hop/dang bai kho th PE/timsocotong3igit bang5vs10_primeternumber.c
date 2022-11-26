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
int checkSum (int number){
	//108
	int sum = 0;
	int du =0;
	while(number != 0){
		du = number % 10;
		sum = sum + du  ;
		number = number/10;
	}
	if ( sum == 5 || sum == 10 ){
		return 1;
	}else{
		return 0;
	}
}
void display (int n){
	//your code here
	int exist =0 ; // bien check xem to tai so ao hay khong
	int i;
	for(i =100;i<=n;i++){  // trong khoang 100 den n
		if(checkSum(i) == 1&&checkPrime(i) ==1 ){
			printf("%d ",i);
			exist =1 ;
		}
	}
	if (exist == 0){
		printf("No solution ");
	}
}

int main(){
	int n;
	scanf("%d",&n);
	printf("OUTPUT: \n");
	display(n);
	
}

