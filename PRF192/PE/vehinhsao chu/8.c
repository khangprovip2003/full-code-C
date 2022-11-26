//E D C B A
//D C B A
//C B A
//B A
//A
#include<stdio.h>
 
void main()
{
    int i,j,n;
 
    printf("Enter the no of lines\n");
    scanf("%d",&n);
 
    for(i=n;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            printf("%c",(char)(j+64));
        }
        printf("\n");
    }
}
