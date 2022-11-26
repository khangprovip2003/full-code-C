#include "stdio.h"
int main (){
 int i,m,n,k;
printf ("nhap kich thuoc m,n:");
 scanf("%d%d",&m,&n);
 for(i=1;i<=n;i++){
 	 printf("*");
	  }
	  printf("\n");
	  for(k=1;k<=m-2;k++){
	        printf("*");
      for(i=1;i<=n-2;i++){
	   	    printf(" ");
	   }
	        printf("*\n");
}
	   
	  for(i=1;i<=n;i++){
	 	printf("*");
	 }

}