#include<stdio.h>


int main()
{
    int i, n;
    float S;
    i = 0;
    S = 0;
    do
    {
    printf("\nNhap n: ");
    scanf("%d", &n);
    }while(n < 0 && printf("Error: (n >= 0)\n"));
    while(S + i < n)
    {
        i++;         //
        S = S + i;  // t��ng ���ng 1 d?ng S += ++i;
    }
        printf("\nGia tri k lon nhat de S(k) = 1 + 2 + ... + k < n la %d", i);

    return 0;
}

