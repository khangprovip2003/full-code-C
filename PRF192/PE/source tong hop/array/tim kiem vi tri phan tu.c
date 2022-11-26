#include<stdio.h>

void  main()
{
    int i,n,a[100],search,flag=0;

    printf("Enter the number of elements:\n") ;
    scanf("%d",&n) ;
 
    printf("Enter the elements\n") ;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]) ;
    }
    
    printf("Enter the element to be searched\n");
    scanf("%d",&search);
    
    /*Perform search operation*/
    for(i=0;i<n;i++)
    {
        if(a[i]==search)
        {
            printf("Element %d found at %d position\n",search,i);
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("Element %d not found\n",search);
    }
}
