#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int doixung(int m)
{int u,i,t=0,n;
n=m;//123
while(n!=0)
{u=n%10;//u=1
 n=n/10;//n=0
 t=t*10+u;}//3*10*10+2*10+1
if(t==m) return 1;
else return 0;
}
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:


	int n,i,a[1000];
	printf("Enter n = ");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	for(i=0;i<n;i++)
	if (doixung(a[i])== 1) printf("%d ",a[i]);




  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
