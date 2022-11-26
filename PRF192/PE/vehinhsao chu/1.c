//E E E E E
//D D D D
//C C C
//B B
//A
#include<stdio.h>

void main()
{
    int i,j,n;

    printf("Enter the no of lines\n");
    scanf("%d",&n);

    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",(char)(i+64));
        }
        printf("\n");
    }
}
