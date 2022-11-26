#include "stdio.h"
int main(){

int count = 0;
beginloop:
	printf ("Hi\n");
	count++;
	if (count<10)
	goto beginloop;
	printf("end");
}