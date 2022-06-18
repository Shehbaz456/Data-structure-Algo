#include<stdio.h>
void  Display( int arr[],int n){
    for (int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[100],n,i,pos;
    printf("Enter Size of Array: ");
    scanf("%d",&n);
    printf("Enter Element of Array: ");
    for ( i = 0; i <n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter Position you want to delete: ");
    scanf("%d",&pos);
    i=pos-1;
    while (i<=n-1)
    {
        arr[i]= arr[i+1];
        i++;
    }
    n--;
    Display(arr,n);
    return 0;
}