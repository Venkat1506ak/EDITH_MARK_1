#include<stdio.h>

void swap(int *xp,int *yp){
    int temp=*xp;
    *xp=*yp;
    *yp=temp;
}
void selectionsort(int arr[],int n){
    int i,j,min;
    for(i=0;i<n;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min])
            min=j;
        }
        if(min!=i){
            swap(&arr[min],&arr[i]);
            
        }
	printf("At the end of iteration %d \n",i+1);
            for(int k=0;k<n;k++){
                printf("%d ",arr[k]);
            }
            printf("\n");
    }
}
int main(){
    
    int a,min,temp,count=0;;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    printf("selection sort by venkat\n");
    printf("------------------------\n");
    printf("Students' height order before sorting:\n");
    for(int i=0;i<a;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    selectionsort(arr,a);
    printf("After sorting, the height order is :\n");
    for(int i=0;i<a;i++){
        printf("%d ",arr[i]);
    }
    
}