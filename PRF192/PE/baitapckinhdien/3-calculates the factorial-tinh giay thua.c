#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
    int a = 5;
    int b = 0;
    int c = 10;
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
long tinhGiaithua(int n) {
 int i;
    long giai_thua = 1;
    if (n == 0 || n == 1) {
        return giai_thua;
    } else {
        for (i = 2; i <= n; i++) {
            giai_thua *= i;
        }
        return giai_thua;
    }
}
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
printf("Giai thua cua %d  la: %d \n",  a, tinhGiaithua(a));
    printf("Giai thua cua %d  la: %d \n",  b, tinhGiaithua(b));
    printf("Giai thua cua %d  la: %d",  c, tinhGiaithua(c));




  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
