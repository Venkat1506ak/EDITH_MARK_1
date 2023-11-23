#include<stdio.h>
#include<String.h>
int i,j;
void sort(char arr[100]){
	for(i=0;i<strlen(arr)-1;i++){
		for(j=i+1;j<strlen(arr);j++){
			if(arr[i]>arr[j]){
				char temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("%s",arr);
}

int main(){
	char arr[100];
	
	scanf("%s",arr);
	sort(arr);
}
