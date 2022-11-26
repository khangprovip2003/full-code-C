#include"stdio.h"
	 float timmax (float a[],float n){
 	float max=a[0];
 		for (int i=1;i<n;i++){
 			if (max<a[i]){
 				max=a[i];
		 }
	 }
 	return max;
 	}
int main(){
		float a[100];
		int n;
	do{
		printf( "Nhap vao so luong phan tu so thuc n (0<n<=100):");
		scanf("%d",&n);
	}while(n<1||n>=100);
	for(int i=0;i<n;i++){
	
	printf("\na[%d]=",i);
	scanf("%f",&a[i]);
}
		printf("Gia tri lon nhat la:%.2f",timmax(a,n));
		return 0;
}
	
		