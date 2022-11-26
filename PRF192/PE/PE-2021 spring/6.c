#include<stdio.h>
void sort(int a[], int n){
	int i, j;
	int temp;
	for(i = 0; i < n-1; i++){
		for(j = n -1 ; j > 0; j--){
			if(a[j] > a[j-1]){
				temp = a[j];
				a[j] = a[j-1];
				a[j-1] = temp;
			}
		}
	}
}
int main(){
	int n;
	scanf("%d", &n);
	
	int a[100];
	int i;
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	sort(a, n);
	for(i = 0; i < n; i++){
		if(a[i] % 2 == 0)
		printf("%d\n", a[i]);
	}
	return 0;
}
