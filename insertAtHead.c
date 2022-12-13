#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct Node* address;
} node;

void insertAtHead(node** head,int data)
{
    node* temp = (node*)malloc(sizeof(Node));
    temp->data = data;
    if(*head!=NULL)
        *head = temp;
    else
    {
        temp->next = *head;
        *head = temp;
    }
}

void printLinkedList(node* head)
{
    if(!head)
        printf("Empty Linked List...\n");
    else
    {
        while(head)
        {
            printf("%d ",head->data);
            head = head->next;
        }
        printf("\n");
    }
}

int main()
{
    node* head = NULL;

    insertAtHead(&head,5);
    insertAtHead(&head,10);
    insertAtHead(&head,17);
    insertAtHead(&head,200);
    printLinkedList(head);

    return 0;
}
