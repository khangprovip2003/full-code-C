#include"stdio.h"
int main(){
	 int a,b,c,sum;
	 printf ("Enter Angles of triangle:\n");
	 scanf("%d%d%d",&a,&b,&c);
	 sum = a+b+c;
	 if (sum==180&&a>0&&b>0&&c>0){
	 	printf ("Triangle is valid");
	 }else{
	 	printf ("Triangle is not valid");
	 }
}