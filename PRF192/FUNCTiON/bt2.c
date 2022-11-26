// Nhập số tự nhiên n rồi tính tổng các số tự nhiên không lớn hơn n và chia hết cho 7
void STN (int n){
int sum;
for (int i=0; i <=n;i++){
		if (i%7==0){
		sum += i;}
	}
		printf("%d",sum);
	
		
		}



int main(){
	int n;
	printf("Nhap so tu nhien n:");
	scanf ("%d",&n);
	STN(n);
}
