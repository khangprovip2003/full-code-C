#include"stdio.h"
int main(){
	int n, a[10],j,i,k;
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
  	for(int i = 0; i < n ; i++){
        
  		for(int j= i+1; j < n ; j++){
    		if (a[i]==a[j] && a[i]%2==1){
				for(int k=j; k < n-1 ; k++){
        		a[k] = a[k+1];
                } 
	            n--;
	               j--;
            } 
		}
    }
    printf ("-------------");
    for(int i=0;i<n;i++){
    	printf ("%d\n",a[i]);
	}
}
    
