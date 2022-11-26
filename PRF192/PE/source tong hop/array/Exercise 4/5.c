#include"stdio.h"
float sum(float a[100] , int n){
	float s = 0;
	for ( int i = 0 ; i < n ; i++){
		if ( a[i] < 0 ){
			s += a[i];
		}
	} return s;
}
void Inputarray(int a[],int n){
   	for (int i=0;i<n;i++){
		printf("a[%d]= ",i);
			scanf("%f",&a[i]);
	}
}

int main() {
	float a[100];
int n;
	do{
	printf("Nhap n (0<n<100) = ");
	scanf("%d",&n);
	}while(n<=0||n>100);
	Inputarray(a,n);
	printf ("%.2f ",sum(a,n));


}



