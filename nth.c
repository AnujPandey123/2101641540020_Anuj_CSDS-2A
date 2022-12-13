#include<stdlib.h>
#include<stdio.h>

typedef struct Node
{
    int data;
    struct Node* next;
} Node;

void insertAtEnd(Node** head,int data)
{
    Node* temp = (Node*)malloc(sizeof(Node));
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

void nth(Node* head,int n)
{
    Node *first = head, *second = head;
    while(n--)
        second = second->next;
    while(second)
    {
        first = first->next;
        second = second->next;
    }
    printf("%d\n",first->data);
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
    insertAtEnd(&head,7);
    insertAtEnd(&head,6);
    insertAtEnd(&head,5);
    insertAtEnd(&head,4);
    nth(head,5);
    nth(head,4);
    nth(head,3);
    nth(head,2);
    nth(head,1);

    return 0;
}
