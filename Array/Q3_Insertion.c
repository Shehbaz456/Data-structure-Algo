#include<stdio.h>
void display(int arr[], int size){
    for (int i = 0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");    
}
int Insertion(int arr[],int size,int position,int element){
    for (int i = size-1; i>=position-1; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[position-1]=element;
}
int main(){      //n = size of Array
    int arr[100],n,i,j,pos,element; //position is nothing
    printf("Enter Array Size: ");   // index = pos -1; becouse your user don't no Array index
    scanf("%d",&n);
    printf("Enter Array element: ");
    for (int i = 0; i <n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter position of Array you want to insert element: ");
    scanf("%d",&pos);
    printf("Enter element of Array you want to insert: ");
    scanf("%d",&element);
    Insertion(arr,n,pos,element);
    n++;
    printf("Result of Array: ");
    display(arr,n);
    return 0;
}