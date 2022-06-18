#include<stdio.h>
int binarySearch(int arr[],int size,int element){
     int beg,mid,end;
     beg=0;
    end=size-1;
    while (beg<=end){
        mid = (beg+end)/2;
        if (arr[mid]==element)
        {
            return mid;
        }
        else if(arr[mid]<element){
            beg = mid+1;
        }else{
            end = mid -1;
        }    
    }
    return -1;   
}
int main(){
    int arr[100],n,element;
    printf("Enter Size of Array: ");
    scanf("%d",&n);
    printf("Enter Array Elements ");
    for (int i = 0; i <n; i++){
        scanf("%d ",&arr[i]);
    }
    scanf("%d",&element);
    int searchIndex;
    searchIndex = binarySearch(arr,n,element);
    printf("Element %d,was found at %d",element,searchIndex);
    return 0;
}

