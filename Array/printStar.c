// 1 *   //ctrl+L for clear command
// 2 * * *
// 3 * * * * *
// 1 1
// 2  3
// 3  5
// #include<stdio.h>
// int main(){
//     int i,j,r;
//     printf("Enter Rows you want to print Star: ");
//     scanf("%d",&r);
//     for ( i = 0; i < r; i++)
//     {
//         for ( j = 0; j <(2*i)-1; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// liner Search
// #include<stdio.h>

// int main(){
//     int arr[100],i,n,element;
//     printf("Enter Size of Array: ");
//     scanf("%d",&n);
//     printf("Enter Element of Array: ");
//     for ( i = 0; i <n; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("Enter Element you want to Search: ");
//     scanf("%d",&element);
//     // // Search each element //linear Search
//     // for (int i = 0; i < n; i++)
//     // {
//     //     if (element==arr[i])
//     //     {
//     //         printf("Element %d Found at index %d ",element,i);
//     //         break;
//     //     }
    
//     // }
//     int beg,mid,end;
//     beg =0;
//     end =n-1;
//     while (beg<=end)
//     {
//         mid =(beg+end)/2;
//         if (element==arr[mid])
//         {
//             printf("element %d found at index %d",element,mid);
//             break;
//         }
//         else if(element>arr[mid]){
//             beg=mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//     }
//     return 0;
// }




// #include <stdio.h>  
// int main()  
// {  
//     int n;  
//     printf("Enter the number of rows");  
//     scanf("%d",&n);  
//     for(int i=1;i<=n;i++)  
//     {  
//         for(int j=1;j<i;j++)  
//         {  
//             printf(" ");  
//         }  
//         for(int k=1;k<=n;k++)  
//         {  
//          if(i==1 || i==n || k==1 || k==n)  
//            printf("*");  
//             else  
//             printf(" ");  
//         }  
//         printf("\n");  
//     }  
//     return 0;  
// }













// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter Rows you want to print Star: ");
//     scanf("%d",&n);
//     for (int i = 1; i <= n; i++){
//         for (int j = 0; j < 2*i-1; j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// bubble Sort in C
#include<stdio.h>
void printfArray(int arr[],int n){
    for (int i = 0; i <n; i++)
    {
        printf("%d ",arr[i]);
    } 
    printf("\n");  
}

void bubbleSort(int *arr,int n){
    int temp;
    for (int  i = 0; i < n-1; i++) //for number of pass
    {
        for (int j = 0; j <n-1-i; j++) //condition for comparision in each pass;
        {
            if (arr[j]>arr[j+1])
            { 
                temp=arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }    
        }    
    }
 }
int main(){
    int arr[] ={32,33,550,66,77};
    int n=5;
    printfArray(arr,n); //before bubble Sort
    bubbleSort(arr,n);   //function of Short Array
    printfArray(arr,n); //after bubble Sort
    return 0;
}