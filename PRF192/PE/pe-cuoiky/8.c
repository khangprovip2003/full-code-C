#include <stdio.h>
#include<string.h>
int main() {
    char s[100]="Abcz";
    int i,m,n;
    char max='A';
    char min ='z';
    for(i=0;i<strlen(s);i++){
        if(s[i]>max){
            m=i;
        }
    }
   
     for(i=0;i<strlen(s);i++){
        if(s[i]<min){
        n=i;
        }
    }
    char temp;
    temp =s[m];
    s[m]=s[n];
    s[n]=temp;
    
    printf("%s",s);
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}

