#include<stdio.h>
void  DISPLAY( int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[100],n,index =2,element=100,i;
    printf("Enter Array Size ");
    scanf("%d",&n);
    for (int i = 0; i <n ; i++)
    {
        scanf("%d",&arr[i]);
    } 
    for ( i = n-1; i >=index; i--)
    {
        arr[i+1] = arr[i];
    } 
    arr[index]=element;
    n = n+1;
    DISPLAY( arr, n);
    return 0;
}