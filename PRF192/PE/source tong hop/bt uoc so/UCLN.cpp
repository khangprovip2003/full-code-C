#include<stdio.h>
#include<conio.h>

int main()
{
    int a, b;

    do{
        printf("\nNhap vao so nguyen duong a = ");
        scanf("%4d", &a);
        if (a < 0)
        {
            printf("\nGia tri nhap vao khong hop le. Xin kiem tra lai !");
        }
    } while (a < 0);

    do{
        printf("\nNhap vao so nguyen duong b = ");
        scanf("%4d", &b);
        if (b < 0)
        {
            printf("\nGia tri nhap vao khong hop le. Xin kiem tra lai !");
        }
    } while (b < 0);

    int Max = a > b ? a : b;
    int Min = a < b ? a : b;

    //for(int i = Min; i >= 1; i--)  // u?c chung l?n nh?t lu�n l� u?c c?a min
    //{
    //    if(Max % i == 0 && Min % i == 0)
    //    {
    //        printf("\nUSCLN = %d", i);
    //        break;
    //    }
    //}

    // C�ch 2:
    if (Max % Min == 0)
    {
        printf("\nUSCLN = %d", Min);
    }
    else
    {
        for (int i = Min / 2; i >= 1; i--)
        {
            if (Min % i == 0 && Max % i == 0)
            {
                printf("\nUSCLN = %d", i);
                break;
            }
        }
    }

    // C�ch 3:
    while(a != b)
    {
        if(a > b)
            a = a - b;
        else
            b = b - a;
    }
    printf("\nUSCLN = %d", a); // hay in ra b cung du?c v�  l�c n�y a == b
    getch();
    return 0;
}
