#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    system("cls");
    //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
    int n;
    char s[100];
    scanf("%d", &n);
    fflush(stdin); //clear buffer
    int i;
    for (i = 0; i < n; ++i) {
        scanf("%c", &s[i]); //clear buffer
        fflush(stdin);
    }

    //Count the frequency of characters in s and save to f[]
    int f[256] = {0};
    for (i = 0; i < n; ++i) {
        f[s[i]]++;
    }

    //Find the 1st max in f[]
    char max1 = s[0];
    for (i = n - 1; i >= 0; --i) {
        if (f[max1] < f[s[i]])
            max1 = s[i];
    }

    //After finding max1, we need to remove it from f[]
    f[max1] = 0;

    //Find the 2nd max in f[]
    char max2 = s[0];
    for (i = n - 1; i >= 0; --i) {
        if (f[max2] < f[s[i]])
            max2 = s[i];
    }

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE:

    //in theo thu tu nhap, nen tim ky tu xuat hien dau tien 
    char firstMaxChar, secondMaxChar;
    for (i = 0; i < n; ++i) {
        if (s[i] == max1) {
            firstMaxChar = max1;
            secondMaxChar = max2;
            break;
        }
        if (s[i] == max2) {
            firstMaxChar = max2;
            secondMaxChar = max1;
            break;
        }
    }

    printf("%c\n%c", firstMaxChar, secondMaxChar);


    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return (0);
}

