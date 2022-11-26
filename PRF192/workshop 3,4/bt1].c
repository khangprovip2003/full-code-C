#include<stdio.h>
int main() {
	int d,m,y;
	printf("Enter day, month, year: \n");
	scanf("%d%d%d", &d, &m, &y);
	switch (m) {
    	case 1: case 3: case 5: case 7: case 8: case 10: 
    		if (d == 31) {
    			m = m + 1;
    			d = 1;
    		    printf("%d %d %d", d, m, y);
			}if(d>31){
				printf("This day is not exits");
			}
			else {
				d = d + 1;
				printf("%d %d %d", d, m, y);
			}
    		break;
    	case 4: case 6: case 9: case 11:
    		if (d == 30) {
    			m = m + 1;
    			d = 1;
    		    printf("%d %d %d", d, m, y);
			}if(d>30){
				printf("This day is not exits");
			}
			else {
				d = d + 1;
				printf("%d %d %d", d, m, y);
			}
    		break;
		case 2:
		    if (y%4==0 && y%100!=0)	{
				if (d == 29) {
    				m = m + 1;
    				d = 1;
    		   	 printf("%d %d %d", d, m, y);
				}
				else {
				d = d + 1;
				printf("%d %d %d", d, m, y);
			} 
			
	      	}
			else {
				if (d == 28) {
					m = m + 1;
					d = 1;
					printf("%d %d %d", d, m, y);
				}if(d>28){
					printf("This day is not exits");
				}
				
			
				else {
					d = d + 1;
					printf("%d %d %d", d, m, y);
				}
	     	}
	     	break;
		case 12:
			if (d == 31) {
    			m = 1;
    			d = 1;
    			y = y + 1;
    		    printf("%d %d %d", d, m, y);
			}if(d>31){
				printf("This day is not exits");
			}
			else {
				d = d + 1;
				printf("%d %d %d", d, m, y);
			}
    		break;
	}
		
}