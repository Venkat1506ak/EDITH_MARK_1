#include <stdio.h>

int main() {
    int a,b,i,j,c=0,res,rem;
    printf("To Check Adam Number By Venkat\n");
    printf("------------------------------\n");
    printf("Enter the number : ");
    scanf("%d",&a);
    i=a*a;
    while(a!=0){
        rem=a%10;
        a=a/10;
        b=b*10+rem;
    }
    j=b*b;
   
    while(j!=0){
        res=j%10;
        j=j/10;
        c=c*10+res;
       
    }
    if(c==i){
        printf("Adam Number");
    }else{
        printf("Not an Adam Number");
    }
    return 0;
}