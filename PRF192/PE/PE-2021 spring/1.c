#include<stdio.h>

int main(){
	double x;
	scanf("%lf", &x);
	double area = x * x * 3.14;
	printf("%.2lf", area);
	return 0;
}
