#include<stdio.h>
#include<stdio.h>
#include<string.h>

int main(){
	char s[100];
	fflush(stdin);
	gets(s);
	strrev(s);
	puts(s);
	return 0;
}

