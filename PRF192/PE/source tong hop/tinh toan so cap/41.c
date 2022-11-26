#include<stdio.h>

int main()
{
    int i, n;
    float S;
    i = 0;
    S = 1;

    printf("\nNhap n: ");
    scanf("%d", &n);

    while(i <= n)
    {
      S = 1 + 1.0/S;
      i++;
    }
    printf("\nTong la %f", S);
   
    return 0;
}
