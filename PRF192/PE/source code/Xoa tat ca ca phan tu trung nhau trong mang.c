#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void delete_repeat(int n){
    int i,j,check,a[1000],b[1000];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("%d ",a[0]);
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            if(a[i]!=a[j])
                check=1;
            else {
                check=0;
                break;
            }
        }
        if(check==1)
            printf("%d ",a[i]);
    }
}
//_____________________________
main(){
    int n;
    scanf("%d",&n);
    delete_repeat(n);
}
