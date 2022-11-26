#include"stdio.h";
void drawHead(int m,int n){
	int i, j;
	for(i=1;i<7;i++){
		for(j=1;j<=7;j++){
			if (!((i == 1&& (j==1||j==4||j==7))
			||(i==4 &&(j==1||j==7))
			||(i==5 &&(i<=2||j>=6))
			||(i==6 &&(j<=3||j>=5)))){
				printf(" * ");
			 }else {
			 printf("   ");
		}
	}
		printf("\n");
}

}

int main(){
	int n=7,m=6;
	drawHead(m,n);
	return 0;
}