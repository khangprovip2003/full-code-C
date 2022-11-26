//Enter size of array: 10
//Enter elements in array: 20 2 10 6 52 31 0 45 79 40
//
//Elements of array in ascending order: 0      2      6      10      20      31      40      45      52      79

#include <stdio.h>
#define MAX_SIZE 100    // Maximum array size

int main()
{
    int arr[MAX_SIZE];
    int size;
    int i, j, temp;

    /* Input size of array */
    printf("Enter size of array: ");
    scanf("%d", &size);

    /* Input elements in array */
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<size; i++)
    {
        /* 
         * Place currently selected element array[i]
         * to its correct place.
         */
        for(j=i+1; j<size; j++)
        {
            /* 
             * Swap if currently selected array element
             * is not at its correct position.
             */
            if(arr[i] < arr[j])
            {
                temp     = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    /* Print the sorted array */
    printf("\nElements of array in ascending order: ");
    for(i=0; i<size; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}

