#include <stdio.h>

int main() {
    printf("Code to find number of jumps -by venkat\n");
    printf("---------------------------------------\n");
    int n,h,k,count=0;
    int s[100];
    printf("Enter the number of ropes:");
    scanf("%d",&n);
    printf("Enter the Heighr monkey jumps:");
    scanf("%d",&h);
    printf("Enter the Height monkey slides:");
    scanf("%d",&k);
    for(int i=0;i<n;i++)
    {
        printf("Enter the value of %d repe:",i+1);
        scanf("%d",&s[i]);
    }
    for(int i=0;i<n;i++)
    {
        while(s[i]>0)
        {
            count++;
            s[i]=s[i]-h;
            if(s[i]<=0)
            {
                
            }
            else{
                s[i]=s[i]+k;
            }
        }
    }
    printf("%d",count);
    return 0;
}