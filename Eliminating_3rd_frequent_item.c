#include <stdio.h>
#include<string.h>

int main()
{
    int i,j;
    char arr[100];
    char s[100];
    printf("To Check Eliminate 3rd Frequent By Venkat\n");
    printf("-----------------------------------------\n");
    printf("Enter the string : ");
    scanf("%s",s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]==s[i+1] && s[i]==s[i+2])
        {
            for(j=i+2;j<strlen(s);j++)
            {
                s[j]=s[j+1];
            }
        }
        printf("%c",s[i]);
    }
    

    return 0;
}