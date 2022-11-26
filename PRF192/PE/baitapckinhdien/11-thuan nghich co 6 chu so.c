#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  const int DEC_10 = 10;
  int count = 0, i;
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
int isThuanNghich(int n) {
    int a[20];
    int dem = 0, i;
    // phan tich n thanh mang cac chu so
    do {
        a[dem++] = (n % DEC_10);
        n = n / DEC_10; 
    } while (n > 0);
    // kiem tra tinh thuan nghich
    for (i = 0; i < (dem/2); i++) {
        if (a[i] != a[(dem - i - 1)]) {
            return 0;
        }
    }
    return 1;
}
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
for (i = 100000; i < 1000000; i++) {
        if (isThuanNghich(i)) {
            printf("%d\n", i);
            count++;
        }
    }
    printf("Tong cac so thuan nghich co 6 chu so la: %d", count);
}




  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
