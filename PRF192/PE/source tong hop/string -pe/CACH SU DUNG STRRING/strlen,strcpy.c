#include <stdio.h>
#include <string.h>
int  main () {
	char  ch2[10] = "hellopoint" ;
	char  ch1 [11] = "javatpoint" ;
	int len=strlen(ch1);
	printf ("Number of characters in ch1=%d\n",len);
	printf ("\n---------------\n");
	// Hàm strcpy(target, source) trong C được sử dụng để sao chép chuỗi ký tự từ source tới target.
	char source[20] = {'v', 'i', 'e', 't', 't', 'u', 't', 's', '\0'};
    char target[20];
    strcpy(target, source);
    printf("Chuoi target: %s", target);
	
	
	
}
