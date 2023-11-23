#include<stdio.h>

int main(){
	
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		int c=n-i-1;
		int d=n+i+2;
		for(j=0;j<2*n+1;j++){
			if(j==n){
				printf("*");
				
			}
			else if(j>=c && j<n){
				printf("(");
			}
			else if(j<d && j>n){
				printf(")");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
