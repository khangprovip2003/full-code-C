#include<stdio.h>
#include<string.h>
int position(char s[],char c){
	int i;
	for (i = 0; i < strlen(s); i++) {
       if(s[i]==c) {
	   		return i;
	   		break;
	   }
	   
	}
	 return -1;
}


int main() {
    char s[100];
    char c;
    scanf("%s", s);
    scanf("%*c%c", &c);
  	
    printf("%d",position(s,c));  
    
    
    
    
    
    return 0;
}


