#include <stdio.h>
void Display(int arr[], int Size)
{
    for (int i = 0; i < Size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main(){
    
    int arr[100],n,i,j;
    printf("Enter Size of Array: ");
    scanf("%d",&n);
    printf("Enter Element in Array ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    Display(arr, n); 
    for ( i = 0; i < n - 1; i++){   
        for (int j = 0; j < n-i-1; j++){
            if (arr[j]>arr[j + 1]){
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;   
            }
        } 
    }
    Display(arr, n); 
    return 0;
}



