#include<stdio.h>
#include <stdlib.h>
struct Node{
    int data;
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
    head ->data = 545;
    head ->next = second;

    // link second and third node 
    second ->data = 5;
    second ->next = third;

    // link third node and terminate
    third ->data = 45;
    third ->next = NULL;
    // print list
    display(head);
    return 0;
}


// #include<stdio.h>
// #include<stdlib.h>

// struct node
// {
//     int data;
//     struct node*next;
// }node_1;

// void display(struct node*ptr){
//     while (ptr!=NULL)
//     {
//         printf("Element of list is %d \n",ptr->data);
//         ptr = ptr ->next;
//     }
    
// }

// int main(){
//     struct node *head;
//     struct node *second;
//     struct node *third;
//     head = (struct node*)malloc(sizeof(struct node));
//     second = (struct node*)malloc(sizeof(struct node));
//     third = (struct node*)malloc(sizeof(struct node));

//     head ->data =1000;
//     head ->next = second;

//     second ->data =1300;
//     second ->next = third;

//     third ->data =1040;
//     third ->next = NULL;
//     display(head);
//     return 0;
// }


