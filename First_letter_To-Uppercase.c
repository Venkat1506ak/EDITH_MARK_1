#include<stdio.h>
#include<string.h>

int main(){
    char s[100];
    printf("To change 1st letter to Uppercase By Venkat\n");
    printf("-------------------------------------------\n");
    printf("Enter the String:");
    scanf("%[^\n]",s);
    s[0]=s[0]-32;
    printf("%c",s[6]);
    for(int i=0;i<strlen(s);i++){
        if(s[i]==' '){
            s[i+1]=s[i+1]-32;
        }
        
    }
    printf("%s",s);
}