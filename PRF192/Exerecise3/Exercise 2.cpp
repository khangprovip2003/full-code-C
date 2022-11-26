//Nhập số tự nhiên n rồi tính tổng các số tự nhiên không lớn hơn n và chia hết cho 7
#include"stdio.h"
int main (){
	int n,i,sum=0;
	printf("nhap so tu nhien n:");
	scanf("%d",&n);
//	for(i=7;i<=n;i+=7){
		
	//		sum+=i;
	//	}
			//	printf ("\nTong cac so tu nhien khong lon hon n va chia het cho 7:%d",sum);
for (i=0; i <=n;i++){
		if (i%7==0){
		sum += i;}
	}
		printf("%d",sum);
	
		
		}
