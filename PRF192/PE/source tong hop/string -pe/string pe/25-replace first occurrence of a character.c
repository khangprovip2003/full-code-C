//Enter any string: I love Codeforwin.
//Enter character to replace: I
//Enter character to replace 'I' with: !
//
//String before replacing: I love Codeforwin.
//String after replacing first 'I' with '!' : ! love Codeforwin.
#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size

/* Function declaration */
void replaceFirst(char * str, char oldChar, char newChar);


int main()
{
    char str[MAX_SIZE], oldChar, newChar;

    printf("Enter any string: ");
    gets(str);

    printf("Enter character to replace: ");
    oldChar = getchar();

    // Used to skip extra ENTER character
    getchar();

    printf("Enter character to replace '%c' with: ", oldChar);
    newChar = getchar();


    printf("\nString before replacing: %s\n", str);

    replaceFirst(str, oldChar, newChar);

    printf("String after replacing first '%c' with '%c' : %s", oldChar, newChar, str);

    return 0;
}


/**
 * Replace first occurrence of a character with
 * another in given string.
 */
void replaceFirst(char * str, char oldChar, char newChar)
{
    int i=0;

    /* Run till end of string */
    while(str[i] != '\0')
    {
        /* If an occurrence of character is found */
        if(str[i] == oldChar)
        {
            str[i] = newChar;
            break;
        }

        i++;
    }
}
