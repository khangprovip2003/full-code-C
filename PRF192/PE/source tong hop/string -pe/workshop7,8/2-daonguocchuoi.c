#include <stdio.h>
#include <string.h>
void Q2(char s[])
{
    for (int i = 0; i < strlen(s) - 1; i++)
    {
        for (int j = i + 1; j < strlen(s); j++)
        {
            if (s[i] > s[j])
            {
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}
int main()
{
    char s[100];
    scanf("%s", s);
    Q2(s);
    printf("%s", s);
    return 0;
}