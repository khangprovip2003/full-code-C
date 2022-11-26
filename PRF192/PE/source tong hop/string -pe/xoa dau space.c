
#include<stdio.h>
void removeSpace(char *s){
	int i,k;
	int n= strlen(s);
	for(i=0;i<n;i++){
		if(s[i]==' '&& s[i+1]==' '){
			for(k=i+1;k<n;k++){
				s[k]=s[k+1];
			}
			n--;
			i--;
		}
	}
}


int main(){
	char str[100];
	printf("input string c: ");
	gets(str);
	removeSpace(str);
	printf("%s",str);

}

