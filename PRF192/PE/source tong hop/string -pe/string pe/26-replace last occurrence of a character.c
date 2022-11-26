//Enter any string: Do you love programming.
//Enter character to replace: .
//Enter character to replace '.' with: ?
//
//String before replacing: 
//Do you love programming.
//
//String after replacing '.' with '?' : 
//Do you love programming?
#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size

/* Function declaration */
void replaceLast(char * str, char oldChar, char newChar);


int main()
{
    char str[MAX_SIZE], oldChar, newChar;

    printf("Enter any string: ");
    gets(str);

    printf("Enter character to replace: ");
    oldChar = getchar();

    // Dummy getchar() to eliminate extra ENTER character
    getchar();

    printf("Enter character to replace '%c' with: ", oldChar);
    newChar = getchar();


    printf("\nString before replacing: \n%s", str);

    replaceLast(str, oldChar, newChar);

    printf("\n\nString after replacing '%c' with '%c': \n%s", oldChar, newChar, str);

    return 0;
}


/**
 * Replace last occurrence of a character with 
 * another in given string.
 */
void replaceLast(char * str, char oldChar, char newChar)
{
    int i, lastIndex;

    lastIndex = -1;
    i = 0;

    /* Run till end of string */
    while(str[i] != '\0')
    {
        /* If an occurrence of character is found */
        if(str[i] == oldChar)
        {
            lastIndex = i;
        }

        i++;
    }

    if(lastIndex != -1)
    {
        str[lastIndex] = newChar;
    }
}
