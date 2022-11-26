#include<stdio.h>
#include<string.h>
int countNumber(char *s){
	int i;
	int n=strlen(s);
	int count=0;
	for(i=0;i<n;i++){
		if (s[i] >= '0' && s[i]<= '9'){
			count ++;
		}
	}
	return count;
}
int main(){
	char str[100];
	printf("iput string c: ");
	gets(str);
	int count=countNumber(str);
	printf("co %d ki tu so",count);
}

