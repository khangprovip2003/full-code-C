#include<stdio.h>
int main (){
	char ch;
	printf ("Enter to check whether a charater is alphabet or not:");
	scanf ("%c",&ch);
	if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
	printf ("A character is alphabet");
}else {
	printf("A character is not alphabet");
}
}