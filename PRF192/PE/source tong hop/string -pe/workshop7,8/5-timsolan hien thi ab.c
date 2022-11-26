#include <stdio.h>
#include <string.h>
int Q5(char s[])
{
    int count = 0;
    if (s[0] == 'a' && s[1] == 'b')
        count++;
    for (int i = 2; i < strlen(s) - 2; i++)
    {

        if (s[i] == ' ' && s[i + 1] == 'a' && s[i + 2] == 'b') // 32
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
    printf("%d", Q5(s));
    return 0;
}