#include<stdio.h>
#include<math.h>
int prime(int n)
{
int i;
	if(n<2) return 0;
	for(i=2;i<=sqrt(n);i++)
	if(n%i==0) return 0;
	return 1;
}
int main()
{
	int arr[100],n,i,count=0;
	scanf("%d",&n);
	for(i = 0;i < n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("OUTPUT:\n");
	for(i = 0;i < n;i++)
	{
			if(prime(arr[i])==1) {
				printf("%d ",arr[i]);
				count++;
			}
	}
	if (count == 0) {
		printf("no primes");
	}
}
//


