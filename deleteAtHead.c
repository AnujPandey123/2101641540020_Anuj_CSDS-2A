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
        Node* tempHead = *head;
        while(tempHead->next)
            tempHead = tempHead->next;
        tempHead->next = temp;
    }
}

void deletionAtHead(Node** head)
{
    if(!(*head)->next)
    {
        free(*head);
        *head = NULL;
    }
    else
    {
        Node* tempHead = *head;
        *head = (*head)->next;
        free(tempHead);
    }
}

void printLinkedList(Node* head)
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
