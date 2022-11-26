// sap xep mang tang dan va giam gian 
void swap(int a,int b){           // hoan vitri

int tam=a;
a=b;
b=tam;

}
void  sapxeptang(int x[],int n){
	for(int i=0;i<n-1;i++){
		int vitrinhonhat = i;   // danh dau
	
	for (int j=i+1;j<n;j++){
		if (x[j]<x[vitrinhonhat]){
			vitrinhonhat=j;     // danh dau 
		}
	}
	swap (x[i],x[vitrinhonhat]);
}
 void printfMang(int x[],int n){            //do in nhieu lan nen dung nhu the nay  
for (int i;i<n;i++){
	printf ("%d",x[i]);
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
// mang tang dan
printf("\n Mang tang dan");
sapxepTang(a,n);      // in mang
printfmang(a,n;)

}


