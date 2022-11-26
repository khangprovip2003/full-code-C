//E
//D E
//C D E
//B C D E
//A B C D E
#include<stdio.h>
 
void main()
{
    int i,j,n;
 
    printf("Enter the no of lines\n");
    scanf("%d",&n);
 
    for(i=n;i>=1;i--)
    {
        for(j=i;j<=n;j++)
        {
            printf("%c",(char)(j+64));
        }
         printf("\n");
    }
}
