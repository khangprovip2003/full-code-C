#include<stdio.h>
#include <string.h>
void main ()  
{  
    char s[20];  
    printf("Enter the string?");  
    scanf("%s",s);    //  neu nhap javapoint is best 
  
    printf("You entered %s",s);  // output : javapoint 
                                 //đoạn mã trên sẽ không hoạt động đối với các chuỗi được phân tách bằng dấu cách
                                 //
	                             //Để làm cho mã này hoạt động cho các chuỗi được phân tách bằng dấu cách thi dung scanf ("% [^ \ n] s" , s) ;
	printf("Enter the string?");  
    scanf("%[^\n]s",s);  
    printf("You entered %s",s);
	
}  