//dem cac so tu nhien trong xau nhap tu ban phim. Các ki tu so gan nhau ghep thanh 1 so tu nhien 
//Vi du a123bc4d56ef
//           cho ra dap an  la : 3
#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char s[100];
    int i=0,j,dem=0;
    gets(s);
    while (i<=strlen(s))
    {
        j=0;
        while ( s[i]>='0' && s[i]<='9' )
        {
             i++;
             j++;
        }
        i++;
        if (j!=0) dem++;
     }
     printf("%d",dem);
     getch(); 
}

