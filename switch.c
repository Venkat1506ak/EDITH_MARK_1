#include<stdio.h>
#include<string.h>

int main(){
	int n,a,b;
	float c;
	printf("Enter the 1st number:");
	scanf("%d",&a);
	printf("Enter the 2nd number:");
	scanf("%d",&b);
	while(1){
	
	printf("\nEnter the choise:\n1.Addition\n2.Subtraction\n3.Multiplication4.Division\n5.Exit\n");
	
	scanf("%d",&n);
	if(n==5){
		break;
	}		
	switch(n){
		case 1:
			c=a+b;
			printf("%d + %d = %f\n",a,b,c);
			break;
		
		case 2:
			c=a-b;
			printf("%d - %d = %f\n",a,b,c);
			break;
			
		case 3:
			c=a*b;
			printf("%d * %d = %f\n",a,b,c);
			break;
			
		case 4:
			c=a/b;
			printf("%d / %d = %f\n",a,b,c);
			break;
			
		default:
			printf("Invalid option\n");
			break;
	}
}
	
}
