#include<stdio.h>

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
int main(){
	int n,i,a[1000];
	printf("Enter n = ");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	if (doixung(a[i])== 1) printf("%d ",a[i]);
    

}
