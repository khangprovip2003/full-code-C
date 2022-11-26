//A B C D E
//B C D E
//C D E
//D E
//E
#include<stdio.h>
 
void main()
{
    int i,j,n;
 
    printf("Enter the no of lines\n");
    scanf("%d",&n);
 
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            printf("%c",(char)(j+64));
        }
        printf("\n");
    }
}
