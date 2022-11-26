//       A
//     B A B
//   C B A B C
//  D C B A B C D
//E D C B A B C D E
#include<stdio.h>

void main()
{
        int i,n,j;
        
        printf("Enter the no of lines\n");
        scanf("%d",&n);
        
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n-i;j++)
            {
                printf("  ");
            }
            for(j=i;j>0;j--)
            {
                printf(" %c",(char)(j+64));
            }
            for(j=2;j<=i;j++)
            {
                printf(" %c",(char)(j+64));
            }
            printf("\n");
        }
}
