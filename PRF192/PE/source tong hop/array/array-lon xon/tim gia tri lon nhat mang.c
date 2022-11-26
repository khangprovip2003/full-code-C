#include "stdio.h"
int main(){
	int array[]={1,2,3,4,5,6,7,8,9,0};
	int i, max;
	max = array[0];
	  for(i=0;i<10;i++){
	  	
	  	if(max<array[i]){
	  		max=array[i];
		  }
		  
	  }
	
	printf("phan tu lon nhat cua array:%d",max);
}