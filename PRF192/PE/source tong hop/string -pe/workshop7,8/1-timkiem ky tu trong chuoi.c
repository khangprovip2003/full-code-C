#include <stdio.h>
#include <string.h>
int Q1(char s[], char c)
{
    int count = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == c)
        {

            count++;
            printf("%d ", i);
        }
    }

    return count;
}
int main()
{
    char s[100], c;
    scanf("%[^\n]", s);
    rewind(stdin);
    scanf("%c", &c);
    if (Q1(s, c) == 0)
        printf("%c not exist", c);
    return 0;
}
