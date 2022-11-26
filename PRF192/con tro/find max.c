#include"stdio.h"
#define MAX 1000
int main () {
	int n,a[MAX]={4,6,9,4,3,16,7};
	int *pb=&a;
	printf("Nhap n:");
	scanf("%d",&n);
		int max=*pb;
	for(int pb=&a[0]; pb<&a[6]; pb++){                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              
		if(max<*pb){
			max=*pb;
		}


}
	printf("Gia tri lon nhat cua array:%d",max);
}