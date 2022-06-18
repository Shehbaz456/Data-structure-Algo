#include<stdio.h>
int Display(int arr[],int Size){
    for (int i = 0; i < Size; i++)
    {
        printf("%d ",arr[i]);
    }   
}
int main(){
    int n,arr[100],element,pos,i;
    printf("Enter Size of Array: ");
    scanf("%d",&n);
    printf("Enter Element of Array: ");
    for (i = 0; i <n; i++)
    {
        scanf("%d",&arr[i]);
    }
    // insertion
    printf("Enter Position you want to insert: ");
    scanf("%d",&pos);
    printf("Enter Elememt you want to insert: ");
    scanf("%d",&element);  
    i=n-1;  
    while (i>=pos-1)
    {
        arr[i+1]=arr[i];
        i--;
    }
    arr[pos-1]=element;
    n++;
    Display(arr,n);
    return 0;
}


