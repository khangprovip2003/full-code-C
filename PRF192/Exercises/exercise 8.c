#include<stdio.h>
int main (){
	char ch;
	printf ("Enter to check a character is uppercase or lowercase alphabet:");
	scanf("%c",&ch);
	if (ch>='a'&& ch<='z'){
		printf ("character is lowercase alphabet ");
	}else if(ch>='A'&&ch<='Z'){
		printf ("character is uppercase alphabet");
	}else
	printf ("character is not lowercase and uppercase alphabet");	
	
	
	
}
