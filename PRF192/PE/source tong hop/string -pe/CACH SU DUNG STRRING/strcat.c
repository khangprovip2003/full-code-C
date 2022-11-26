#include<stdio.h>
#include <string.h>

int main() {
	char  ch [10] = { 'H',  'e',  'l',  'l',  'o',  '\0' };
	char  ch2 [10] = { 'C',  '\0' };
	strcat (ch, ch2);
	printf ( "Gia tri cua chuoi dau tien la: %s", ch);
	return 0;
}
//Hàm strcat() trong C được sử dụng để nối 2 chuỗi trong C.