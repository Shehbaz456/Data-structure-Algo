#include<stdio.h>
void Display(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[5] = { 9  ,8  ,7  ,6  ,3};
    int n=5,i,j=0,element; 
    Display(arr, n);
    for ( i = 0; i <= n-1; i++)
    {  
        element = arr[i];
        j=i-1;
        while (j>=0 && arr[j]>element){ 
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = element;   
        
    }
    Display(arr, n);
    return 0;
}


//insertion sort
//  0   1   2   3   4
//  9  ,18  ,7  ,6  ,3
  
    //pass 1
//  0   1   2   3   4
//  9 | ,18  ,7  ,6  ,3      //comparision  n-1

    //pass 2
//  0   1   2   3   4       //comparision  n-2
//  9  ,18 | ,7  ,6  ,3

    //pass 3
//  0   1   2   3   4      //comparision  n-3
//  7   9   18| ,6  ,3

    //pass 4
//  0   1   2   3   4     //comparision   n-4
//  6   7   9  18 |,3       

    //pass 5
//  0   1   2   3   4      //sorted array 
//  3   6   7   9   18         

//  
//




