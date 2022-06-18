
//Q2a linear Search using Fanction;
#include<stdio.h>
int linearSearch(int arr[],int size,int element){
  for (int i = 0; i < size; i++)
  {
    if (arr[i]==element)
    {
      return i;
    }
  }
  return -1;
}
int main(){
  int arr[5],element,n;
  printf("Enter Size of Array: ");
  scanf("%d",&n);
  printf("Enter Array Elements: ");
  for (int i = 0; i <n; i++)
  {
    scanf("%d",&arr[i]);
  }
  int size=sizeof(arr)/sizeof(int);
  printf("Enter Element you want to Search in Array ");
  scanf("%d",&element);
  int SearchIndex = linearSearch(arr,size,element);
  printf(" element %d was found at index %d \n",element,SearchIndex);
  return 0;
}
