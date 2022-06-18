// dynamic memory  allocation ---
#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    int n,i;
    printf("Enter Array size ");
    scanf("%d",&n);
    printf("Enter Element of array ");
    // Dynamically allocat mamory using malloc function
    ptr = (int*)malloc(n*sizeof(int));

    if(ptr==NULL){
        printf("Memory not allocated");
        exit(0);
    }
    else{
        printf("Memory allocated successfully");
        // get the element of array 
        for ( i = 0; i < n; ++i)
        {
            ptr[i] =i+1;
        }
        printf("the element of array ");
        for ( i = 0; i < n; i++)
        {
            printf("%d ", ptr[i]);
        }      
    }
    free(ptr);


    return 0;
}


