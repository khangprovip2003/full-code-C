#include"stdio.h"
int timgiatri (int x[],int n){
	int flag=0;
	for(int i=1;i<n;i++){
		if (x[i]<2004 && x[i]%2==0){
			flag=1;
		}
		
	}
	return flag;
	
	
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
int flag = timgiatri(a,n);
	if (flag ==1){
		printf ("tim thay gia tri");
	}else {
		printf("khong tim thay gia tri");
	}
	
	


}

