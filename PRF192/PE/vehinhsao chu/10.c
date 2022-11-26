//E F G H I
//D E F G
//C D E
//B C
//A
#include<stdio.h>
 
void main()
{
    int i,j,k,n;
 
    printf("Enter the no of lines\n");
    scanf("%d",&n);
 
    for(i=n;i>=1;i--)
    {
        k = i;
        for(j=1;j<=i;j++,k++)
        {
            printf("%c",(char)(k+64));
        }
         printf("\n");
    }
}
