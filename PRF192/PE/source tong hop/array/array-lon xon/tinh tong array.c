#include"stdio.h"
int main(){

int array[10]={1,2,3,4,5,6,7,8,9,0};
int i,sum=0;
for(i=0;i<10;i++){
	sum+=array[i];

}
		printf ("\n%d",sum);
return 0;
}