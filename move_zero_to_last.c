#include <stdio.h>

int main() {
    // int arr[]={1,2,3,4,0,5,0,6};
    printf("Move zero to last\n");
    printf("-----------------\n");
    int a;
    printf("Enter the Array size\n");
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    // printf("%d",n);
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count++;
            for(int j=i;j<n-1;j++){
                arr[j]=arr[j+1];
            }
        }
    }
    for(int i=n-count;i<n;i++){
        arr[i]=0;
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }

    return 0;
}