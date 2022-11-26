//Enter any string: I Love programming. I Love Codeforwin. I Love India.
//Enter character to remove from string: I
//
//String after removing first 'I' : Love programming. I Love Codeforwin. I Love India.
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size

/* Function declaration */
void removeFirst(char *, const char);


int main()
{
    char str[MAX_SIZE];
    char toRemove;

    printf("Enter any string: ");
    gets(str);

    printf("Enter character to remove from string: ");
    toRemove = getchar();

    removeFirst(str, toRemove);

    printf("String after removing first '%c' : %s", toRemove, str);

    return 0;
}


/**
 * Function to remove first occurrence of a character from the string.
 */
void removeFirst(char * str, const char toRemove)
{
    int i = 0;
    int len = strlen(str);

    /* Run loop till the first occurrence of the character is not found */
    while(i<len && str[i]!=toRemove)
        i++;

    /* Shift all characters right to the position found above, to one place left */
    while(i < len)
    {
        str[i] = str[i+1];
        i++;
    }
}
