#include <stdio.h>
 
int main() {
   int arr[7] ;
   int i, total = 0,size;
   // tinh do dai cua mang
   scanf ("%d",&size); 
     
   printf("In tat ca phan tu cua mang: \n");
   for(i = 0; i < size-1; i++) {
       scanf("%d ", &arr[i]);
    }
     
   // tinh tong cac phan tu cua mang
   for(i = 0; i < size-1; i++) {
      total = total + arr[i];
    }
     
   printf("\nGia tri trung binh cua mang la: %f", (float) total / size-1);
   return 0;
}
