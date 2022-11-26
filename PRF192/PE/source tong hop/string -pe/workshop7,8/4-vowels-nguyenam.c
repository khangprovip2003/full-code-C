#include <stdio.h>
#include <string.h>
int Q4(char s[])
{
    int count = 0;
    for (int i = 0; i < strlen(s); i++)
    {

        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            count++;
        }
    }
    return count;
}

int main()
{
    char s[100];
    scanf("%[^\n]", s);
    printf("%d", Q4(s));
    return 0;
}