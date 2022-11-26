#include<stdio.h>
#include<conio.h>
# define MAX 100
int main() {
	int a[MAX];
	int i, sum = 0;
	int *ptr;

	printf("\nNhap 10 phan tu: ");

	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);

	ptr = &a; /* a=&a[0] */

	for (i = 0; i < 10; i++) {
		sum = sum + *ptr;
		ptr++;
	}

	printf("Tong cac phan tu cua mang la: %d", sum);
	return(0);
}