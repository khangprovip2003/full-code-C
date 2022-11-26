//Enter any string: I love programming. I love Codeforwin.
//Enter any character to search: o
//'o' is found at index 3
//'o' is found at index 9
//'o' is found at index 23
//'o' is found at index 28
//'o' is found at index 32
#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size 

int main()
{
    char str[MAX_SIZE];
    char toSearch;
    int i;

    /* Input string and character to search from user */
    printf("Enter any string: ");
    gets(str);
    printf("Enter any character to search: ");
    toSearch = getchar();

    /* Run loop till the last character of string */
    i=0;
    while(str[i]!='\0')
    {
        /* If character is found in string */
        if(str[i] == toSearch)
        {
            printf("'%c' is found at index %d\n", toSearch, i);
        }

        i++;
    }

    return 0;
}

