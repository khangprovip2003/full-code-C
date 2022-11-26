
#include"stdio.h"
#include "math.h"
 
 	int kiem_tra_SNT(int x){    //ham nay de kiem tra snt
 		 if (x<=1)       // neu sai dieu kien thi bo qua codeblock nay
 		 	return 0;   // return ve 0 la ham nay khong hoat dong 
	
	for (int i=2;i<=x-1;i++ ){
if (x%i==0)
return 0;//  neu so i chia het bat ky so nao nho hon no thi bo qua codeblock vi dieu kien SCP la chia het cho 1 va chinh no
	}	  
	return 1;// ko co uoc so nao khac ngoai chinh ban than no va 1 va coi no la SNT
	 }
	 
	 int main (){
	 // nhap du lieu
 	int n;
    printf ("nhap vao n=");
 	scanf ("%d",&n);
 	// goi ham
 	int kt= kiem_tra_SNT(n);
 	// xu ly va xuat ket qua 
 	if (kt==0){
 		printf ("khong phai so nguyen to");
	 }else {
	 	printf ("la so nguyen to");
	 }
 }
