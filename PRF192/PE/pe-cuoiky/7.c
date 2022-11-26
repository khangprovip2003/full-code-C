#include <stdio.h>
#include <math.h>
#include <string.h>


int main() {
	int n;
	scanf("%d", &n);
	int a[100];
	int i, j , flag = 0;
	for(i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	int sum;
	scanf("%d", &sum);
	
	for(i = 0 ; i < n; i++)
	{
		for(j = 0 ; j < n; j++)
		{
			if(a[i] + a[j] == sum)
			{
				printf("%d\n", i);
				printf("%d\n", j);
				flag = 1;
				break;
			}
		}
		if(flag == 1)
		{
			break;
		}
	}

	return 0;
}

