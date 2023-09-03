#include <stdio.h>
#include<string.h>

int main() {
    char arr[100],arr1[100],res[100],res1[100];
    char sam[]="abcdefghijklmnopqrstuvwxyz";
    int c,z=0,k=0,flag=0;
    printf("To Check Anagram By Venkat\n");
    printf("--------------------------\n");
    printf("Enter the 1st string : ");
    scanf("%s",arr);
    printf("Enter the 2nd string : ");
    scanf("%s",arr1);
    c=strlen(arr);
    for(int i=0;i<strlen(sam);i++){
        for(int j=0;j<c;j++){
            if(sam[i]==arr[j]){
                res[k]=sam[i];
                k++;
                
            }
            
        }
    }
    for(int i=0;i<strlen(sam);i++){
        for(int j=0;j<strlen(arr1);j++){
            if(sam[i]==arr1[j]){
                res1[z]=sam[i];
                z++;
                
            }
            
        }
    }  
   for(int i=0;i<strlen(arr);i++){
        if(res[i]==res1[i]){
            flag=1;
        }
        else{
            flag=0;
            break;
        }
    }
    if(flag){
        printf("anagram");
    }
    else {
        printf("not an angram");
    }

    return 0;
}