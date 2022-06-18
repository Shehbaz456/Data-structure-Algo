#include<stdio.h>
void Display(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[]={22,44,6,2,61,23,66},i,j,n=7,element;
    Display(arr,n);
    for ( i = 0; i < n-1; i++) // for number of passes
    {
        element = arr[i];
        j=i-1;
        while (j>=0 && arr[j]>element){ 
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = element; 
    }
    Display(arr,n);
    return 0;
}