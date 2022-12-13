#include<stdlib.h>
#include<stdio.h>

typedef struct Node
{
    int data;
    struct Node* next;
} node;

void insertAtEnd(node** head,int data)
{
    node* temp = (node*)malloc(sizeof(Node));
    temp->data = data;
    if(!*head)
        *head = temp;
    else
    {
        node* s = *head;
        while(s->next)
            s = s->next;
        s->next = temp;
    }
}

void deletionAtHead(node** head)
{
    if(!(*head)->next)
    {
        free(*head);
        *head = NULL;
    }
    else
    {
        node* s = *head;
        *head = (*head)->next;
        free(s);
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
    Node* head = NULL;
    insertAtEnd(&head,6);
    insertAtEnd(&head,7);
    insertAtEnd(&head,30);
    printLinkedList(head);
    deletionAtHead(&head);
    printLinkedList(head);

    return 0;
}
