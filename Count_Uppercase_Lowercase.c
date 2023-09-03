#include<stdio.h>
#include<string.h>

int main(){
    char s[100],a[100];
    int count=0,count1=0;
    printf("To Check count uppercase and lowercase By Venkat\n");
    printf("------------------------------------------------\n");
    printf("Enter the String:");
    scanf("%[^\n]",s);
    for(int i=0;i<strlen(s);i++){
        if(s[i]>=65 && s[i]<=90){
            count++;
        }
        else if(s[i]>=97 && s[i]<=122){
            count1++;
        }
    }
    printf("Upper case : %d\n",count);
    printf("Lower case : %d\n",count1);
}