#include <stdio.h>
#define MAX 100
int main(){
	int n = 0;
	float a[MAX];
	int count = 0;
	int gt;
	do{
		
		printf("1- Add a value");
		printf("\n2- Search a value");
		printf("\n3- Print out the array");
		printf("\n4- Print out values in a range");
		printf("\nOther - Quit");
		printf("\nChoose an operation: ");
		scanf("%d", &gt);
			switch(gt){
				case 1:
					printf ("\n1- Add a value\n");
					printf ("Nhap gia tri muon them: ");
					scanf ("%f",&a[n]);
					n++;
					count++;
					printf ("Add\n");
					break;
				case 2:
					printf ("\n2- Search a value\n");
					if ( count == 0 ){
						printf ("Mang rong\n");
					}
					else {
						float val;
						printf ("Nhap  gia tri can tim: ");
						scanf ("%f",&val);
						for(int i = 0; i < n; i++){
						    if(a[i] == val ){
						        printf (" dia chi %.2f tim thay o vi tri %d",val,i);
								}
						}
					}
					break;
				case 3:
					printf ("\n3- Print out the array\n");
					if ( count == 0 ) {
						printf ("Mang rong\n");
					}
					else {
					for (int i = 0 ; i < n ; i++){
						printf ("%.4f \n",a[i]);
					} 
					printf ("\n");
					}
					break;
				case 4:
					printf ("\n4- Print out values in a range\n");
					if (count == 0 ){
						printf (" Mang rong");
					}
					else {
					float minVal,maxVal;
						printf ("minVal = ");
						scanf ("%f",&minVal);
						printf ("maxVal = ");
						scanf ("%f",&maxVal);
						for ( int i = 0 ; i < n ; i++){
							if ( a[i] >= minVal && a[i] <= maxVal){
								printf ("%.2f\n",a[i]);
							}else{
								printf("Khong co gia tri trong khoang!");
							}                               
						}    
					}
					break;
				default:
					printf("\nQuit!");
				break;	
		}	
		
		printf("\n");
	}while(gt>=1&&gt<=4);

return 0;
}