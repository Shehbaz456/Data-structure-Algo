#include<stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node*prev;
    struct Node*next;
};
    // Display elements of linked list
void display(struct Node*ptr){
    while (ptr!=NULL)
    {
        printf("Element %d \n", ptr->data);
        ptr = ptr ->next;
    }
    
}
int main(){
    struct Node* head;
    struct Node* second;
    struct Node* third;
    head =(struct Node*)malloc(sizeof(struct Node));
    second =(struct Node*)malloc(sizeof(struct Node));
    third =(struct Node*)malloc(sizeof(struct Node));
    // link head and second node
    head->prev = NULL;
    head ->data = 545;
    head ->next = second;

    // link second and third node
    second ->prev =head;
    second ->data = 5;
    second ->next = third;

    // link third node and terminate
    third ->prev = second;
    third ->data = 45;
    third ->next = NULL;
    // print list
    display(head);
    return 0;
}



