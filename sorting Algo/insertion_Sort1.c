// Insertion Sort 
#include<stdio.h>
void Display(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[]={22,44,6,2,61,23,66},i,n=7;
    Display(arr,n);
    // int temp,k;
    // for ( i = 0; i <= n-1; i++)
    // {   
    //     k=i-1;            // K means i-1 back element of i
    //     temp = arr[i];   //arr[i] is take value of elements
    //     while (temp<=arr[k] && k>=0)
    //     {
    //         arr[k+1] =arr[k]; 
    //         k--;
    //     }
    //     arr[k+1] = temp;    
    // }
 //................................................
    int temp,j;
    for ( i = 0; i <=n-1; i++)
    {
        for ( j = 0; j <n-i-1 ; j++)
        {   
            if (arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] =temp;
            }   
        }
    }
    Display(arr,n);
    return 0;
}