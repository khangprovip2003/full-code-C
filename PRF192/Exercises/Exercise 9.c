#include "stdio.h"
int main(){
	int num;
	printf("Enter the number:");
	scanf ("%d",&num);
	switch (num){
		case 1:
			printf ("Monday");
			break;
	    case 2:
	    	printf ("Tuesday");
	        break;
		case 3:
			printf ("Wednesday");
			break;
		case 4:
			printf ("Thurday");
			break;
		case 5:
			printf("Friday");
			break;
		case 6:
			printf ("Saturday");
			break;
		case 7:
			printf ("sunday");
			break;	
		default:
		printf("  Incorrect number entered");			
		
			
			
			
	}
}