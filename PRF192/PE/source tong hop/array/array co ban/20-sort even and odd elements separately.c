//Enter size of the array: 10
//Enter elements in the array: 0 1 2 3 4 5 6 7 8 9
//Elements in the array: 0 1 2 3 4 5 6 7 8 9
//
//Elements after arranging even and odd elements separately
//Elements in the array: 0 6 2 8 4 5 1 7 3 9
//
//Final array after sorting even and odd elements separately
//Elements in the array: 0 2 4 6 8 1 3 5 7 9
#include <stdio.h>
#include <limits.h> //Used for INT_MAX
  
#define MAX_SIZE 1000 //Maximum size of the array
  
  
/*
 * Functions used in this program
 */
void arrange(int arr[], int len, int pivot);
void sort(int arr[], int start, int end);
void print(int arr[], int len);
  
  
  
int main()
{
    int arr[MAX_SIZE], i, n;
    int pivot, evenCount, oddCount;
  
    pivot = 0;
    evenCount = oddCount = 0;
  
    /*
     * Reads size and elements in the array
     */
    printf("Enter size of the array: ");
    scanf("%d", &n);
    printf("Enter elements in the array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
  
        // If current element is odd then increase pivot
        if(arr[i] & 1)
            oddCount++;
        else
            evenCount++;
    } 
     
    /*
     * Pivot is position that separates even and odd elements
     */
    pivot = (evenCount > oddCount) ? evenCount : oddCount;
  
    print(arr, n);
  
    // Arranges all even and odd elements sequentially
    arrange(arr, n, pivot);
     
    // Print elements after arranging even and odd elements
    printf("\nElements after arranging even and odd elements separately\n");
    print(arr, n);
  
    //Sorts even part of the array
    sort(arr, pivot, n);
  
    //Sorts odd part of the array
    sort(arr, 0, pivot);
  
    //Prints the final sorted array
    printf("\nFinal array after sorting even and odd elements separately\n");
    print(arr, n);
  
    return 0;
}
  
  
  
/**
 * Arranges all even and odd elements of the array separately. Puts
 * all even elements first then all odd elements.
 */
void arrange(int arr[], int len, int pivot)
{
    int i, j, temp;
  
    for(i=0; i<pivot; i++)
    {
        /*
         * If current element of array is odd put it into
         * odd element place
         */
        if(arr[i] & 1)
        {
            for(j=pivot; j<len; j++)
            {
                //Look for an even element then swap with odd element
                if(!(arr[j] & 1))
                {
                    temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                    break;
                }
            }
        }
    }
}
  
  
  
/**
 * Sorts the elements of array within a range 
 */
void sort(int arr[], int start, int end)
{
    int i, j, temp;
    int len = start + end;
  
    for(i=start; i<len; i++)
    {
        for(j=i+1; j<len; j++)
        {
            if(arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
  
  
  
/**
 * Prints the entire integer array 
 */
void print(int arr[], int len)
{
    int i;
    printf("Elements in the array: ");
    for(i=0; i<len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

