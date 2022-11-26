#include"stdio.h"
#include"string.h"
int main () {
	char str[100];
	printf ("Enter string:\n");
	scanf ("%[^\n]s",str);
	printf ("%s",str);
	return 0;

}