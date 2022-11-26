#include <stdio.h>
#include <string.h>
void Q3(char s[])
{
    if (s[0] >= 'a' && s[0] <= 'z')
        s[0] -= 32;
    for (int i = 0; i < strlen(s ) - 1 ; i++)
    {
        if (s[i] == ' ' && (s[i + 1] >= 'a' && s[i + 1] <= 'z')) 
        {
            s[i + 1] -= 32;
        }
    }
}

int main()
{
    char s[100];
    scanf("%[^\n]", s);
    Q3(s);
    printf("%s", s);
    return 0;
}