#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  int n;
   int dem = 0; // dem tong so nguyen to
    int i = 2;   // tim so nguyen to bat dau tu so 2
    printf("Nhap n = ");
    scanf("%d", &n);
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
int isPrimeNumber(int n) {
    // so nguyen n < 2 khong phai la so nguyen to
    if (n < 2) {
        return 0;
    }
    // check so nguyen to khi n >= 2
    int i;
    int squareRoot = sqrt(n);
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
printf("%d so nguyen to dau tien la: \n", n);
   
    while (dem < n) {
        if (isPrimeNumber(i)) {
            printf("%d ", i);
            dem++;
        }
        i++;
    }




  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
