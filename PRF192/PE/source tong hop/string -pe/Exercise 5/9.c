#include"stdio.h"
#include"string.h"
int main(){
	char s1[100];
	char s2[100];
	printf ("Enter S1:");
	scanf("%s",s1);
	printf("/n");
	printf("Enter S2:");
	scanf("%s",s2);
	if(strcmp(s1,s2)==0){
		printf("two people have the same name");
	}else{
		printf("two people don't have the same name");
	}
	
	
}