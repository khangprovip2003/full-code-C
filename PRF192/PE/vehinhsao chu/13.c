//E
//E D
//E D C
//E D C B
//E D C B A
#include<stdio.h>
 
void main()
{
    int i,j,n;
 
    printf("Enter the no of lines\n");
    scanf("%d",&n);
 
    for(i=n;i>=1;i--)
    {
        for(j=n;j>=i;j--)
        {
            printf("%c",(char)(j+64));
        }
        printf("\n");
    }
}

