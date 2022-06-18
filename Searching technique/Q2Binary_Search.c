// #include<stdio.h>
// int binarySearch(int arr[],int  size,int element){
//      int beg,mid,end;
//      beg=0;
//     end=size-1;
//     while (beg<=end)
//     {
//         mid = (beg+end)/2;
//         if (arr[mid]==element)
//         {
//             return mid;
//         }
//         else if(arr[mid]<element){
//             beg = mid+1;
//         }else{
//             end = mid -1;
//         }
        
//     }
//     return -1;   
// }
// int main(){
//     int arr[] = {2,453,546,5,6,7,8,9,10,11,33,44};
//     // int arr[5];
//     // printf("Enter Array Elements ");
//     // for (int i = 0; i <=4; i++)
//     // {
//     //     scanf("%d ",&arr[i]);
//     // }
//     int Size = sizeof(arr)/sizeof(int);
//     int element = 10;
//     // int element;
//     // printf("Enter Element you want to Search in Array \n ");
//     // scanf("%d",&element);
//     int searchIndex = binarySearch(arr,Size,element);
//     printf("Element %d,was found at %d",element,searchIndex);

//     return 0;
// }



#include<stdio.h>
int binarySearch(int arr[],int  size,int element){
     int beg,mid,end;
     beg=0;
    end=size-1;
    while (beg<=end)
    {
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
    // int arr[] = {2,453,546,5,6,7,8,9,10,11,33,44};
    int arr[100],element;
    printf("Enter Array Elements: ");
    for (int i = 0; i <=arr[i]; i++)
    {
        scanf("%d ",&arr[i]);
    }
    int Size = sizeof(arr)/sizeof(int);
    // int element = 10;

    printf("Enter Element you want to Search in Array:  \n ");
    scanf("%d",&element);

    
    int searchIndex = binarySearch(arr,Size,element);
    printf("Element %d,was found at %d",element,searchIndex);

    return 0;
}