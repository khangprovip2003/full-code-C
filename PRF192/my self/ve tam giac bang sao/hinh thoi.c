#include"stdio.h"
int main(){
int n,i,a,b=1,k; 
printf ("nhap n:");
scanf("%d",&n);
for(k=1;k<=n-1;k++){
	printf (" ");
}
printf ("*\n");
i=2;

while (i<=n-1){

a=n-i;
for(k=1;k<=a;k++){
	printf (" ");
}
printf ("*");
b=2*i-3;
for(k=1;k<=b;k++){
	printf (" ");         
}
printf("*\n");
i++;
}
printf("*");
for(k=1;k<=(2*n-3);k++){
	printf (" ");
}
printf("*\n");
//  ve day hinh thoi 
i=n-1;

while (i>=2){

a=n-i;
for(k=1;k<=a;k++){   // khi i =n-1 ==) a= n-n+i=1;
	printf (" ");
}
printf ("*");
b=2*i-3;
for(k=1;k<=b;k++){
	printf (" ");         
}
printf("*\n");
i--;
}
// ve dinh cuoi
for(k=1;k<=n-1;k++){
	printf (" ");
}
printf ("*\n");


}