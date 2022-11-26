#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int main() {
system("cls");
//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
int h, m, s;
scanf("%d%d%d", &h, &m, &s);
m += 30;
if (m >= 60) {
h++;
m -= 60;
}
if (h >= 24) h = 0;
// Fixed Do not edit anything here.
printf("\nOUTPUT:\n");
//@STUDENT: WRITE YOUR OUTPUT HERE:
if (h < 10) printf("0%d:", h);
else printf("%d:", h);
if (m < 10) printf("0%d:", m);
else printf("%d:", m);
if (s < 10) printf("0%d", s);
else printf("%d", s);
//--FIXED PART - DO NOT EDIT ANY THINGS HERE
printf("\n");
system ("pause");
return(0);
}
