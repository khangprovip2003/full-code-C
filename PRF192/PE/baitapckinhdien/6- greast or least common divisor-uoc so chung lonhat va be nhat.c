#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
   int a, b;
    printf("Nhap so nguyen duong a = ");
    scanf("%d", &a);
    printf("Nhap so nguyen duong b = ");
    scanf("%d", &b);
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
int USCLN(int a, int b) {
    if (b == 0) return a;
    return USCLN(b, a % b);
}
 
/**
 * Tim boi so chung nho nhat (BSCNN)
 */
int BSCNN(int a, int b) {
    return (a * b) / USCLN(a, b);
}
 
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
printf("USCLN cua %d va %d la: %d", a, b, USCLN(a, b));
printf ("\n") ;
printf("BSCLN cua %d va %d la: %d", a, b, BSCNN(a, b));




  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
