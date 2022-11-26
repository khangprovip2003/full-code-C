/* ve tam giac nguoc ben phai vuong xuoi  rong bt3
     *
    **
   * *  // co quy luat 
  *  *
 *   *
******
*/
  #include"stdio.h"
  #include"stdio.h"
int main(){
	int h,i,a,k=1,b;
		printf ("nhap kich thuoc h:");
		scanf("%d",&h);
	for(i=1;i<=h-1;i++){
	printf(" ");
	}
	printf("*\n");

	for(i=1;i<=h-2;i++){
	printf(" ");
	}
	printf("**\n");
                                                                                              
while (k<=h-3){
a=h-2-k;
	for(i=1;i<=a;i++){
	printf(" ");
	}
		printf("*");
	b=k;
	for(i=1;i<=b;i++){
	printf(" ");
	}		
			printf("*\n");
		k++;
}
	for(i=1;i<=h;i++){
	printf("*");
	}
}