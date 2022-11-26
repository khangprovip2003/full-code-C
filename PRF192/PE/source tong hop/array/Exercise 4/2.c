// tim min, max,  gia tri nho nhat va lon nhat trong mang 1 chieu 
#include"stdio.h "
int timMin(int x[], int n){
	int min=x[0];
	for(int i=1;i<n;i++){
		if (min>x[i]){
			min = x[i];
		}     // 6 7 8
	}
	return min;
}



int main(){
		int a[100],n;
	do{
		printf( "Nhap vao so luong phan tu n (0<n<=100):");
		scanf("%d",&n);
		}while(n<1||n>=100);
	for(int i=0;i<n;i++){
	
	printf("\na[%d]=",i);
	scanf("%d",&a[i]);
}

printf ("Min =%d",timMin(a,n));
}