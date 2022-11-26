#include <stdio.h>
#include <math.h>
#include <string.h>


int main() {
	int n;
	scanf("%d", &n);
	int a[100];
	int str[100];
	int i, j ,k;
	for(i = 0 ; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for(i = 0 ;i < n; i++)
	{
		str[i] = 1;
		for(j = i + 1; j < n; j++)
		{
			if(a[i] == a[j])
			{
				str[i]++;
				for(k = j; k < n; k++)
				{
					a[k] = a[k + 1];
				}
				n--;
				j--;
			}
		}
	}
	for(i = 0 ; i < n; i++)
	{
		printf("%d-%d\n", a[i], str[i]);
	}
	

	return 0;
}

