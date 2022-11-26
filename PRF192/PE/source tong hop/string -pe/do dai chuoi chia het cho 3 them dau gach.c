#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void insertchar(char *s){
	//s=abc123abc
	// abc-123-abc
	//b1: s1=abc-123-abc
	//b2: s=s1
	int n= strlen(s);
	int i;
	char *s1=(char*) malloc(100);
	int j=-1;
	for(i=0;i<n;i++){
		j++;
		s1[j]=s[i];//
		if(i%3==2 && i!= n-1){
			j++;
		s1[j]='-';
		}
	}
	j++;
	s1[j]='\0';	
	strcpy(s,s1);
	free(s1);
	
}


int main(){
	char str[20];
	printf("input string c: ");
	gets(str);
	insertchar(str);
	printf("\n%s",str);		
}
