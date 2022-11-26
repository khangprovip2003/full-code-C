#include"stdio.h"
#include"math.h"
int sochinhphuong (int x){
	int khaican= (int) sqrt(x);
	if (pow(khaican,2)==x)
	return 1;
	else 
	return 0;
	
}
int main (){
	int n;
	do{
		printf ("nhap n=");
		scanf ("%d",&n);
	}while (n<1);
	for(int i=2;i<=n;i++){
		if (sochinhphuong(i)){
			printf ("\n%d",i);
		}
		
	}
	
	
	
	
}
