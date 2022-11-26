#include "stdio.h"
int main(){
	int month,year;
	printf("Enter the month:");
	scanf ("%d",&month);
	printf ("Enter the year");
	scanf ("%d",&year);tft
	switch (month){
		case 1:
		case 3:
	    case 5:
		case 8:
		case 10:
		case 12:
		case 7:
		printf ("Have 31 days");
		break;
		case 6:
		case 4:
		case 9:
		case 11:
		printf ("Have 30 days");
		break;
		case 2:
			if ((year%400==0)||(year%4==0&&year%100==0)) {
			printf ("Have 29 day");	
			} else{
			printf ("Have 28 day");\
			}
			break;
			default:
				printf ("Incorrect data entry");
		}
	}
			
			
			
			
			