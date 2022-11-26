#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
    int count = 0;
    int i;
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
int isPrimeNumber(int n) {
    // so nguyen n < 2 khong phai la so nguyen to
    if (n < 2) {
        return 0;
    }
    // check so nguyen to khi n >= 2
    int i;
    int squareRoot = (int) sqrt(n);
    for (i = 2; i <= squareRoot; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
 
}
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
 printf("Liet ke tat ca cac so co 5 chu so:");
    for (i = 10001; i < 99999; i+=2) {
        if (isPrimeNumber(i)) {
            printf("%d\n", i);
            count++;
        }
    }
    printf("Tong cac so nguyen to co 5 chu so la: %d", count);




  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
