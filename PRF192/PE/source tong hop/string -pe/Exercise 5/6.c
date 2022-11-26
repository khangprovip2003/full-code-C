#include"stdio.h"
#include"string.h"
int main () {
	char s[100];
	printf("Enter the string:");
	scanf("%s",s);
	int i;
	for( i=0; i<strlen(s);i++) {
		if(s[i]=='3') {
			s[i]='e';
		}
	}
		printf("%s",s);
	
}

