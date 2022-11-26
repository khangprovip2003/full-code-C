#include<stdio.h>
int main()
{
	float a[100],temp;
	int i,j;
	for(i=0;i<5;i++)
	{
		scanf("%f",&a[i]);
	}
	printf("OUTPUT:\n");
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]<a[j]){
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
		if(a[i]>0)
	printf("%.1f\n",a[i]);
	}	
}

