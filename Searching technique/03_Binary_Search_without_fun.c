#include<stdio.h>
int main(){
    int element,n;
    printf("Enter Array Size ");
    scanf("%d",&n);
    printf("Enter your Array Elements");
    int arr[n];
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter element you want to Search");
    scanf("%d",&element);
    int beg,mid,end;
    beg =0;
    end = n-1;
    while (beg<=end)
    {
        mid = beg+end;
        if (arr[mid]==element)
        {
            printf("number %d was found at %d",element,mid);
            break;
        }
        else if (element<arr[mid])
        {
            end = mid -1;
        }else 
        {
             beg = mid +1;
        }
    }
    
    return 0;
}