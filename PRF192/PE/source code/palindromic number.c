#include<stdio.h>  
#include<conio.h>  

main()  
{  
int n,r,sum=0,bientam;  

printf("Nhap mot so bat ky: ");  
scanf("%d",&n);  
bientam=n;  
while(n>0)  
{  
r=n%10;  
sum=(sum*10)+r;  
n=n/10;  
}  
if(bientam==sum)  
printf("\nSo ban da nhap la so Palindrome!");  
else  
printf("\nSo ban da nhap khong phai la so Palindrome!");  

printf("\n\n===========================\n");
printf("Hoclaptrinh chuc cac ban hoc tot!");
getch();  
}  
