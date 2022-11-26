#include<stdio.h>
int main(){
int a[1000],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++){
		if(a[i]>a[i+1]){
			printf("Khong tang dan");
			break;
		}
	}
	if(i==n-1){
		printf("Mang tangg dan ");
	}
	
}

