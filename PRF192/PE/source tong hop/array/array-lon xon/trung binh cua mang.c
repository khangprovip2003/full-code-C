#include"stdio.h"
int main(){

int array[10]={1,2,3,4,5,6,7,8,9,0};
int i,sum=0;
float avg=0;
for(i=0;i<10;i++){
	sum+=array[i]; 

}
avg =(float) sum/i;
		printf ("\n%.2f",avg);
return 0;
}