#include"stdio.h"
#include"string.h"
int main() {

	char s[100];
	printf("Enter the string :\n");
	scanf("%s",s);
	for (int i; i<s[i]!=0; i++) {
		if(s[i]>=97&&s[i]<=122) {
			s[i]-=32;
		}

	}
	printf("%s\n",s);
}