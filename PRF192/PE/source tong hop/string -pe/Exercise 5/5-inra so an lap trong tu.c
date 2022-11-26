#include"stdio.h"
#include"string.h"
int main() {
	int count=0;
	char s[100];
	printf("Enter the string:\n");
	scanf("%s",s);
	char c;
	printf ("Enter c:\n");
	scanf("%*c%c",&c);
	int len=strlen(s);
	for(int i=0; i<len; i++) {
		if(s[i]==c) {
			count++;
		}
	}
	printf("%d",count);

}