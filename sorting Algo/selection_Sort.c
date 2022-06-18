#include<stdio.h>
void display(int arr[], int size){
    for (int i = 0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");    
}

void selection_Sort(int A[],int n){
    printf("Running Selection Sort \n");
    int indexOfMin,temp;
    for (int i = 0; i < n-1; i++)
    {
        indexOfMin = i;
        for (int j = i+1; j <=n-1; j++)
        {                         
            if (A[j]<A[indexOfMin])
            {
                indexOfMin = j;           
            }  
        }
        // swap A[]
        temp =A[i];
        A[i] = A[indexOfMin];
        A[indexOfMin] = temp;
    }
    
}
    //  timestamp = 4:51
int main(){
    // inputing Array
    //  0  1   2  3   4
    // 3 ,5  ,2  ,13  ,12
    
    // After first pass   
    //  0  1   2  3   4
    //  2  5   3  13  12
    
    // After Second pass
    //  0  1   2  3   4
    //  2  3   5  13  12
    
    // After third pass
    //  0  1   2  3   4
    //  2  3   5  13  12

    // After 4th pass
    //  0  1   2  3   4
    //  2  3   5  12  13

    int  A[5] = {3,5,2,13,12};
    int n=5;
    display(A,n);
    selection_Sort(A, n);
    display(A,n);

    return 0;
}




