#include<stdio.h>

//viet mot ham de trao doi hai gia tri
void swap(int *num1, int *num2) {
   int temp;
   temp = *num1;
   *num1 = *num2;
   *num2 = temp;
}
 
int main() {
   int num1, num2;
 
   printf("\nNhap so thu nhat: ");
   scanf("%d", &num1);
   printf("\nNhap so thu hai: ");
   scanf("%d", &num2);
 
   swap(&num1, &num2);
   
   printf("\n\nSau khi trao doi:");
   printf("\nSo thu nhat: %d", num1);
   printf("\nSo thu hai: %d", num2);
 
   return (0);
}