//Enter any string: I Love Programming. I Love Codeforwin.
//Enter character to remove from string: I
//
//String after removing 'I': Love Programming. Love Codeforwin.
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size

/** Function declaration */
void removeAll(char *, const char);


int main()
{
    char str[MAX_SIZE];
    char toRemove;

    printf("Enter any string: ");
    gets(str);

    printf("Enter character to remove from string: ");
    toRemove = getchar();

    removeAll(str, toRemove);

    printf("String after removing '%c': %s", toRemove, str);

    return 0;
}


/**
 * Function to remove all occurrences of a character from the string.
 */
void removeAll(char * str, const char toRemove)
{
    int i, j;
    int len = strlen(str);

    for(i=0; i<len; i++)
    {
        /*
         * If the character to remove is found then shift all characters to one
         * place left and decrement the length of string by 1.
         */
        if(str[i] == toRemove)
        {
            for(j=i; j<len; j++)
            {
                str[j] = str[j+1];
            }

            len--;

            // If a character is removed then make sure i doesn't increments
            i--;
        }
    }
}


