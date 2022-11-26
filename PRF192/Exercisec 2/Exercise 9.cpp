#include"stdio.h"
int main  (){
	int i,num;
	printf ("Enter number to print multiplication tab:");
	scanf ("%d",&num);
	for(i=1;i<=10;i++){
	
		printf ("\n%d*%d=%d",num,i,num*i);
	}
}