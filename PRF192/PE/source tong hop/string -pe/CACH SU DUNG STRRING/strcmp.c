#include<stdio.h>
#include <string.h>
 
int main() {    
  char str1[20], str2[20];    
  printf("Nhap chuoi 1: ");
  scanf ("%s",str1);
  printf("Nhap chuoi 2: ");
  scanf ("%s",str2);
  if (strcmp(str1, str2) == 0) {
   printf("2 chuoi bang nhau.");
  } else if (strcmp(str1, str2) > 0) {
   printf("Chuoi 1 lon hon chuoi 2");
  } else {
   printf("Chuoi 1 nho hon chuoi 2");
  }
  return 0;
}
//Hàm strcmp() trong C được sử dụng để so sánh 2 chuỗi. 
//Nếu hàm strcmp(str1, str2) trả về 0 thì 2 chuỗi bằng nhau, lớn hơn 0 thì chuỗi str1 lớn hơn chuỗi str2 
//và ngược lại nếu nhỏ hơn 0 thì chuỗi str1 nhỏ hơn str2.