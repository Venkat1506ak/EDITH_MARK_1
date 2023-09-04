#include <stdio.h>

int main() {
    
    printf("Transpose of matrix by venkat\n");
    printf("-----------------------------\n");
    int a,b;
    printf("Enter the matrix size:");
    scanf("%d %d",&a,&b);
    int arr[a][b];
    int sam[a][b];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++){
            printf("\n Enter the value Matrix:");
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Before\n");
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++){
            printf("%d ",arr[i][j]);
            sam[j][i]=arr[i][j];
        }
        printf("\n");
    }
    printf("After\n");
    for(int i=0;i<b;i++)
    {
        for(int j=0;j<a;j++){
            printf("%d ",sam[i][j]);
            
        }
        printf("\n");
    }

    return 0;
}