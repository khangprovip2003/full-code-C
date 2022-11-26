#include<stdio.h>
void sort(int a[], int n){
	int i, j;
	int temp;
	for(i = 0; i < n-1; i++){
		for(j = n -1 ; j > 0; j--){
			if(a[j] < a[j-1]){
				temp = a[j];
				a[j] = a[j-1];
				a[j-1] = temp;
			}
		}
	}
}
int main(){
	int a[100];
	int i;
	for(i = 0; i < 7; i++){
		scanf("%d", &a[i]);
	}
	
	int b[100], num = 0;
	for(i = 0; i < 7; i++){
		if(100 <= a[i] && a[i] <= 999){
			b[num++] = a[i];
		}
	}
	
	if(num == 0){
		printf("No three-digit number");
	}
	else{
		sort(b, num);
		int max = 0;
		int count = 0;
		int j;
		for(i = 0; i  < num; i++){
			count = 0;
			for(j = i; j < num; j++){
				if(b[i] == b[j]){
					count++;
				}
			}
			if(count > max) max = count;
		}
		
		for(i = 0; i  < num; i++){
			count = 0;
			for(j = i; j < num; j++){
				if(b[i] == b[j]){
					count++;
				}
			}
			if(count == max){
				printf("%d ", b[i]);
			}
		}
	}
	return 0;
}
