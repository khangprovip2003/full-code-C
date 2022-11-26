#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  int i; 
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
int isPrimeNumber(int n) {
    // so nguyen n < 2 khong phai la so nguyen to
    if (n < 2) {
        return 0;
    }
    // check so nguyen to khi n >= 2
    int squareRoot = (int) sqrt(n);
    int i;
    for (i = 2; i <= squareRoot; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
printf("Cac so nguyen to nho hon 100 la: \n");
    for (i = 0; i < 100; i++) {
        if (isPrimeNumber(i)) {
            printf("%d ", i);
        }
    }



  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
