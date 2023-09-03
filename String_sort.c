#include <stdio.h>
#include<string.h>

int main() {
    char arr[100];
    char sam[]="abcdefghijklmnopqrstuvwxyz";
    int c,z=0,count=0;
    printf("To Check String Sort By Venkat\n");
    printf("------------------------------\n");
    printf("Enter the string to sort : ");
    scanf("%s",arr);
    c=strlen(arr);
    for(int i=0;i<strlen(sam);i++){
        for(int j=0;j<c;j++){
            if(sam[i]==arr[j]){
                printf("%c",sam[i]);
            }
        }
    }
    return 0;
}