//VD Nhap vao tran van thoa xuat ra
//tran
//van
//thoa
#include <conio.h> #include <stdio.h> #include <string.h>

int main()
{
	int i;
    char xau[30];
    printf("Nhap vao mot chuoi: ");
    gets(xau);
    for( i=0;i<=strlen(xau)-1;i++)
    {
      if(xau[i]!=32)
      {
          printf("%c",xau[i]);
      }
        else       {
    printf("\n");
      }
    }
    getch();
}


