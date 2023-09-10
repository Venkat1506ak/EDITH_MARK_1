#include<stdio.h>

int main(){

int a,b,c=0,count=0,i,j,l;
printf("Enter the size of the matrix");
scanf("%d %d",&a,&b);
int arr[a][b];
for(i=0;i<a;i++){
for(j=0;j<b;j++){
    printf("Enter %d,%d value:",i,j);
scanf("%d",&arr[i][j]);
}
}
for(i=0;i<a;i++){
for(j=0;j<b;j++){
if(c<arr[i][j]){
c=arr[i][j];
}
}
}
//printf("%d\n",c);



// for(i=0;i<a;i++){
// for(j=0;j<b;j++){
// printf("%d ",arr[i][j]);
// }
// printf("\n");
// }



// for(l=1;l<=c;l++){
// for(i=0;i<a;i++){
// for(j=0;j<b;j++){
// if(l==arr[j][i]){
// printf("%d ",l);
// }
// }
//
// }
// }
//


for(l=0;l<=c;l++){
for(i=0;i<a;i++){
for(j=0;j<b;j++){
if(l==arr[i][j]){
count++;
printf("%d ",arr[i][j]);
}
if(count==a){
printf("\n");
count=0;
}
}

}
}

}