// #include <stdio.h>
// #include <stdlib.h>
// struct Node
// {
//     int data;
//     struct Node *next;
// };

// void linkedList_traversal(struct Node *ptr)
// {
//     while (ptr != NULL)
//     {
//         printf("Element : %d\n ", ptr->data);
//         ptr = ptr->next;
//     }
// }

// int main()
// {
//     struct Node *head;
//     struct Node *second;
//     struct Node *third;
//     struct Node *fourth;

//     // Allocate memory for node in linked list in heap
//     head = (struct Node *)malloc(sizeof(struct Node));
//     second = (struct Node *)malloc(sizeof(struct Node));
//     third = (struct Node *)malloc(sizeof(struct Node));
//     fourth = (struct Node *)malloc(sizeof(struct Node));

//     // link first and second node 
//     head->data = 7;
//     head->next = second;

//     // link second and third node 
//     second->data = 122;
//     second->next = third;

//     // link third and fourth node 
//     third->data = 343;
//     third->next = fourth;

//     // link fourth and link terminated node 
//     fourth->data = 3435466;
//     fourth->next = NULL;

//     linkedList_traversal(head);
//     return 0;
// } 













#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

void linkedList_traversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n ", ptr->data);
        ptr = ptr->next;
    }
}


struct Node * insertAtBegin(struct Node *head, int data)
{
    struct Node * ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr ->data = data;
    ptr ->next = head;
    return ptr;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
   

    // Allocate memory for node in linked list in heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
   

    // link first and second node 
    head->data = 7;
    head->next = second;

    // link second and third node 
    second->data = 122;
    second->next = third;

    // link third and fourth node 
    third->data = 343;
    third->next = fourth;

    // link fourth and link terminated node 
    fourth->data = 343;
    fourth->next = NULL;

    linkedList_traversal(head);
    printf("\n");
    head = insertAtBegin(head,600);
    printf("\n");


    linkedList_traversal(head);
    return 0;
}
