// Binary Search
#include<stdio.h>
int BinarySearch(int arr[],int n,int element){
    int beg,end,mid;
    beg=0;
    end = n-1;
    while (beg<=end)
    {
        mid = (beg+end)/2;
        if (arr[mid] == element)
        {
            return mid;
        }
        else if (element>arr[mid] )
        {
            beg=mid+1;
        }
        else{
            end=mid-1;
        }  
    }
    return -1;   //for element not found 
}
int main(){ 
    int n;
    printf("Enter Array Size ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int element;
    printf("Enter Element you want to Search ");
    scanf("%d",&element);
   int searchIndex = BinarySearch(arr,n,element);
    printf("Element %d found at index %d",element,searchIndex);
    return 0;
}
