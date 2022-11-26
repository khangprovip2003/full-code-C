//A
//B F
//C G J
//D H K M
//E I L N O
#include<stdio.h>
 
void main()
{
    int i,j,diff,value,n;
 
    printf("Enter the no of lines\n");
    scanf("%d",&n);
 
    for(i=1;i<=n;i++)
    {
        diff=n-1;
        value=i; 
        for(j=1; j<=i; j++)
        {
            printf("%4c",(char)(value+64));
 
            value=value+diff; 
            diff--;
        }
        printf("\n");
    }
}
