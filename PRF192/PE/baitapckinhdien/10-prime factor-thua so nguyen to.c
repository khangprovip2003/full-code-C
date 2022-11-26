#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  int n;
    printf("Nhap so nguyen duong n = ");
    scanf("%d", &n);
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
 void phanTichSoNguyen(int n) {
    int i = 2;
    int dem = 0;
    int a[100];
    // phan tich
    while (n > 1) {
        if (n % i == 0) {
            n = n / i;
            a[dem++] = i;
        } else {
            i++;
        }
    }
    // neu dem = 0 thi n la nguyen to
    if (dem == 0) {
        a[dem++] = n;
    }
    // in ket qua ra man hinh
    for (i = 0; i < dem - 1; i++) {
        printf("%d x ", a[i]);
    }
    printf("%d", a[dem - 1]);
}
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
phanTichSoNguyen(n);




  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
