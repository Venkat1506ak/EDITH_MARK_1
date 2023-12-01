#include<stdio.h>

int main (){
	int temp,num1,i,num2;
	printf("Enter the number");
	scanf("%d %d",&num1,&num2);
	if(num1>num2){
		temp=num2;
	}
	else{
		temp=num1;
	}
	for(i=temp;i>0;i--){
		if(num1%i==0 && num2%i==0){
			printf("%d",i);
			break;
		}
	}
}
