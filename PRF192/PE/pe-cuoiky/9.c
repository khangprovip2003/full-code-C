#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int i;
	gets(s);
	for( i = 0 ; s[i] != '\0' ; i++)
	{
		if(s[i] >= 'A' && s[i] <= 'Z') 
		s[i] +=32;
		if(s[i-1] == ' ' || i==0)
		{
			if(s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
		}
	}
	printf("OUTPUT:");
	printf("\n%s",s);
}
