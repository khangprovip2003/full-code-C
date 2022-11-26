#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	printf("nhap chuoi:\n");
	scanf("%s",&s);
	int k;
	printf ("Nhap k:\n");
	scanf("%d",&k);
	printf ("%c",s[k-1]);
}
