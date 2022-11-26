/* bài toán liệt kê các phần tử thỏa mãn điều kiện trong mảng 1 chiều 
  ví dụ : Hãy liệt kê các phần tử chẵn và chia hết cho 3 trong mảng 1 chiều các số nguyên */\
  #include "stdio.h"
  
  int thoamandieukien(int x){           //ham dieu kien de gon hon 
  	return (x%2==0 && x%3==0);
  }
  	int kiem_tra_SNT(int x){    //ham nay de kiem tra snt
 		 if (x<=1)       // neu sai dieu kien thi bo qua codeblock nay
 		 	return 0;   // return ve 0 la ham nay khong hoat dong 
	
	for (int i=2;i<=x-1;i++ ){
if (x%i==0)
return 0;//  neu so i chia het bat ky so nao nho hon no thi bo qua codeblock vi dieu kien SCP la chia het cho 1 va chinh no
	}	  
	return 1;// ko co uoc so nao khac ngoai chinh ban than no va 1 va coi no la SNT
	 }
  
  int main(){
	int a[100],n,i;
	do{
		printf( "Nhap vao so luong phan tu n (0<n<=100):");
		scanf("%d",&n);
		}while(n<1||n>=100);
	for(int i=0;i<n;i++){
	
	printf("\na[%d]=",i);
	scanf("%d",&a[i]);
}
printf("phan tu chia het cho 3:");
for(int i=0;i<n;i++){
	if(thoamandieukien(a[i])){
		printf ("\n%d",a[i]);
	}
}

// liet ke cac so nguyen to
printf ("\nIn ra cac so nguyen to:");
for(int i=0;i<n;i++){
	if(kiem_tra_SNT(a[i])){
		printf ("\n%d",a[i]);
	}
}




}