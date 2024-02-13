#include<stdio.h>


//Enter the number:9
//                  1
//                2 1 2
//              3 2 1 2 3
//            4 3 2 1 2 3 4
//          5 4 3 2 1 2 3 4 5
//        6 5 4 3 2 1 2 3 4 5 6
//      7 6 5 4 3 2 1 2 3 4 5 6 7
//    8 7 6 5 4 3 2 1 2 3 4 5 6 7 8
//  9 8 7 6 5 4 3 2 1 2 3 4 5 6 7 8 9
//    8 7 6 5 4 3 2 1 2 3 4 5 6 7 8
//      7 6 5 4 3 2 1 2 3 4 5 6 7
//        6 5 4 3 2 1 2 3 4 5 6
//          5 4 3 2 1 2 3 4 5
//            4 3 2 1 2 3 4
//              3 2 1 2 3
//                2 1 2
//                  1


int main(){
	int a,b,i,j,count=1;
	printf("Enter the number:");
	scanf("%d",&a);
	b=2*a+1;
	for(i=0;i<a;i++){
		int sam=a-i,sri=a+i;
		int c=count+a-sam;
		int d=1;
		for(j=0;j<b;j++){
			
			if(j==a){
				printf("1 ");
			}
			
			else if(j>=sam && j<a){
				printf("%d ",c--);
			}
			
			else if(j<=sri && j>a){
				printf("%d ",++d);
			}
			
			else{
				printf("  ");
			}
		}
		printf("\n");
		count=1;
	}
	
	for(i=1;i<a;i++){
		int sam=a-i,sri=a+i;
		int c=sam,d=1;
		for(j=0;j<b;j++){
			if(j==a){
				printf("1 ");
			}
			
			else if(j>(a-sam) && j<a){
				printf("%d ",c--);
			}
			
			else if(j<(a+sam) && j>a){
				printf("%d ",++d);
			}
			
			else{
				printf("  ");
			}
		}
		printf("\n");
	}
}
