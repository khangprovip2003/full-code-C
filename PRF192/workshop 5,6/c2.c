#include<stdio.h>
int main() {
	double a[100];
	int n;
	double value;
	printf("1-Add a value\n");
	printf("2-Search a value\n");
	printf("3-Printf out the array\n");
	printf("4-Printf out values in a range\n");
	printf("Others- Quit\n");
	printf("Choose menu: ");
	int p;
	scanf("%d", &p);
	switch (p) {
		case 1:
			printf("Enter n : ");
			do {
				scanf("%d", &n);
			} while(n<=0||n>=100);
			printf("Enter the values of array : \n");
			for (int i = 0; i < n; i++) {
				printf("a[%d]= ", i);
				scanf("%lf", &a[i]);
			}
			printf("Enter the value : ");
			scanf("%lf", &value);

			a[n]=value;
			printf("After add a value:\n");
			for( int i=0; i<=n; i++) {
				printf("%.lf ",a[i]);
			}
			break;

		case 2:
			printf("Enter n : ");
			do {
				scanf("%d", &n);
			} while(n<=0||n>=100);
			printf("Enter the values of array : \n");
			for (int i = 0; i < n; i++) {
				printf("a[%d]= ", i);
				scanf("%lf", &a[i]);
			}

			printf("Enter the value : ");
			scanf("%lf", &value);
			printf("The indexes of value are : ");
			for (int i = 0; i < n; i++) {
				if(a[i] == value) {
					printf("%d ", i);
				}
			}
			break;
		case 3:
			printf("Enter n : ");
			do {
				scanf("%d", &n);
			} while(n<=0||n>=100);
			printf("Enter the values of array : \n");
			for (int i = 0; i < n; i++) {
				printf("a[%d]= ", i);
				scanf("%lf", &a[i]);
			}
			for (int i = 0; i < n; i++) {
				printf("%0.4lf ", a[i]);
			}
			break;
		case 4:

			printf("Input minVal, maxVal: \n");
			double minVal,maxVal;
			do {
				scanf("%lf %lf", &minVal, &maxVal);
			} while(minVal>=maxVal);
			printf("Enter n : ");
			do {
				scanf("%d", &n);
			} while(n<=0||n>=100);
			printf("Enter the values of array : \n");
			for (int i = 0; i < n; i++) {
				printf("a[%d]= ", i);
				scanf("%lf", &a[i]);
			}

			for (int i = 0; i < n; i++) {
				if (a[i] > minVal && a[i] < maxVal)
					printf("%.lf ", a[i]);
			}
			break;

		default:
			break;
	}
	return 0;
}