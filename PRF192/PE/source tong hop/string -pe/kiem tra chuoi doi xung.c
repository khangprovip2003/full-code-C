#include<stdio.h>
#include<string.h>
int checkSymmetry(char *s){
	// check doi xung
	int i;
	int n= strlen(s);
	for(i=0;i<n;i++){
		if(s[i]!=s[n-i-1]){
			return 0;
		}
	}
	return 1;
}
int main(){
	char str[100];
	printf("input string c: ");
	gets(str);
	int status= checkSymmetry(str);
	if(status == 0){
		printf("Khong la chuoi doi xung");
	}else{
		printf("la chuoi doi xung ");
	}



}

