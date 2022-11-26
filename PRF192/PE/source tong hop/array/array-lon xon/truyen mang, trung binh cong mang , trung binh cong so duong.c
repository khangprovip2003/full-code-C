/* tính trung bình cộng mảng 1 chiều 
 Nhập vào mảng 1 chiều gồm n( 0<n<100) phần tử:
  - Tính trung binh cộng các phần tử trong mảng:
  - Tình trung bình cộng các số dương trong mảng: */
#include"stdio.h"
 float trungbinhcong(int x[],int n){
 	int tong=0;
	 for(int i=0;i<n;i++){
	 tong+= x[i];
}
 return (float)tong/n;	
 }
float  trungbinhcongsoduong(int x[],int n){
	int tong=0;
	int soluongsoduong=0; 
	for(int i=0;i<n;i++){
		if(x[i]>=0){
		tong+=x[i];
		soluongsoduong++;
	}
}
	return soluongsoduong>0?(float)tong/soluongsoduong:-1;
	

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
printf ("trung binh cong :%.2f",trungbinhcong(a,n));
// trung binh cong so duong
float tbcsd = trungbinhcongsoduong(a,n);
if (tbcsd>0){
	printf("\ntrung binh cong so duong:%.2f",tbcsd);
}else{
	printf("\n array khong co so duong");
}


}
	
	
	
	
	
	
