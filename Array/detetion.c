//deletion Program in Array 
#include<stdio.h>
void  DISPLAY( int arr[],int n){
    for (int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int Deletion_ele(int arr[],int pos,int size){
    for (int i = pos-1; i <=size-1 ; i++){
        arr[i] = arr[i+1];
    }
}
int main(){
    int arr[100],n,pos;
    printf("Enter Size of Array: ");
    scanf("%d",&n);
    printf("Enter Array element: ");
    for (int i = 0; i <n; i++){
        scanf("%d",&arr[i]);
     }
    printf("Enter Position of Array you want to delete: ");
    scanf("%d",&pos);
    Deletion_ele(arr,pos,n);
    n--;
    DISPLAY( arr, n);
    return 0;
}
//     //size -1 (n-1) is nothing 
//     //but when we start array
//     // with 0 so we take n-1


