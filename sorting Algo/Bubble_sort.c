//Bubble Sort in Array
#include <stdio.h>
void Display(int arr[], int Size)
{
    for (int i = 0; i < Size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[100],n;
    printf("Enter Size of Array: ");
    scanf("%d",&n);
    printf("Enter element of array: ");
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&arr[i]);
    }
    Display(arr, n);
    // bubble Sort;
    int temp;
    for (int i = 0; i < n - 1; i++) // no of pass
    // if we have 6 element of Array
    // then no of pass(it mean's layer of steps) is 5
    // so we use n-1; where n is size of Array
    {
        for (int j = 0; j < n - 1 - i; j++) // for no of comparision
        // it mean 1 ke liye n-1 comparision
        // it mean 2 ke liye n-2 comparision
        // it mean 3 ke liye n-3 comparision
        // it for n ke liye n-1-i comparision  where i=0;
        {
            if (arr[j] > arr[j + 1])
            {
                int temp;
                temp = arr[j];       // arr[j] first element of array
                arr[j] = arr[j + 1]; // arr[j+1] next element of Array
                arr[j + 1] = temp;
            }
        }
    }
    Display(arr, n);
    return 0;
}






// #include <stdio.h>
// void Display(int arr[], int Size)
// {
//     for (int i = 0; i < Size; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }
// int main()
// {
//     int arr[100],n;
//     printf("Enter Size of Array: ");
//     scanf("%d",&n);
//     printf("Enter element of array: ");
//     for (int i = 0; i <n; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     Display(arr, n);
//     // bubble Sort;
//     int temp;
//     for (int i = 0; i < n - 1; i++) // no of pass
//     // if we have 6 element of Array
//     // then no of pass(it mean's layer of steps) is 5
//     // so we use n-1; where n is size of Array
//     {
//         for (int j = 0; j < n - 1 - i; j++) // for no of comparision
//         // it mean 1 ke liye n-1 comparision
//         // it mean 2 ke liye n-2 comparision
//         // it mean 3 ke liye n-3 comparision
//         // it for n ke liye n-1-i comparision  where i=0;
//         {
//             if (arr[j+1] > arr[j])
//             {
//                 int temp;
//                 temp = arr[j];       // arr[j] first element of array
//                 arr[j] = arr[j + 1]; // arr[j+1] next element of Array
//                 arr[j + 1] = temp;
//             }
//         }
//     }
//     Display(arr, n);
//     return 0;
// }




// #include<stdio.h>
//  void  Display(int arr[],int Size){
//      for (int i = 0; i <Size; i++)
//      {
//         printf("%d ",arr[i]);
//      }
//      printf("\n");
// }

// int Bubble_Sort(int arr[],int n){
//     int temp;  //i for number of pass like: 5 element 4 pass
//     for (int i = 0; i < n-1; i++)
//     {
//         // for 1 ke liye n-1 comparision
//         // for 2 ke liye n-2 comparision
//         // for 3 ke liye n-3 comparision
//         // for n ke liye n-1-i comparision
//         printf("number of pass %d\n",i);
//         for (int j = 0; j <n-1-i ; j++)
//         {
//             if (arr[j]>arr[j+1])
//             {
//                 temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]= temp;
//             }
//         }
//     }
// }
// int main(){
//     int arr[]={22,1,44,66,22,55,33,8,3,33};
//     int n=10; 
//     Display(arr,n);
//     Bubble_Sort( arr, n);
//     Display(arr,n);
//     return 0;
// }




// // insersion of element 
// #include<stdio.h>
// void printfArray(int arr[],int n){
//     for (int i = 0; i <n; i++)
//     {
//         printf("%d ",arr[i]);
//     } 
//     printf("\n");  
// }

// int main(){
//     int arr[100],n;
//     printf("Enter Size of Array: ");
//     scanf("%d",&n);
//     printf("Enter element of Array: ");
//     for (int i = 0; i <n; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     int pos,element;
//     printf("Enter Position of Array: ");
//     scanf("%d",&pos);
//     printf("Enter one Element of Array you want to insert: ");
//     scanf("%d",&element);
//     for (int i =n-1; i>=pos-1 ; i--){
//         arr[i-1]=arr[i];
//     }
//     arr[pos-1]=element;
//     n++;
//     printfArray(arr,n);

//     return 0;
// }