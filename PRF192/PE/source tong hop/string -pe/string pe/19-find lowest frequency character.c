//Enter any string: I love learning programming at Codeforwin.
//Minimum occurring character is '.' = 1.
#include <stdio.h>
#define MAX_SIZE 100  // Maximum string size
#define MAX_CHARS 255 // Maximum characters allowed


int main()
{
    char str[MAX_SIZE];
    int freq[MAX_CHARS]; //Stores frequency of each character
    int i = 0, min;
    int ascii;

    printf("Enter any string: ");
    gets(str);

    /* Initialize frequency of all characters to 0 */
    for(i=0; i<MAX_CHARS; i++)
    {
        freq[i] = 0;
    }


    /* Finds frequency of each characters */
    i=0;
    while(str[i] != '\0')
    {
        ascii = (int)str[i];
        freq[ascii] += 1;

        i++;
    }


    /* Finds minimum frequency */
    min = 0;
    for(i=0; i<MAX_CHARS; i++)
    {
        if(freq[i] != 0)
        {
            if(freq[min] == 0 || freq[i] < freq[min])
                min = i;
        }
    }


    printf("Minimum occurring character is '%c' = %d.", min, freq[min]);

    return 0;
}
