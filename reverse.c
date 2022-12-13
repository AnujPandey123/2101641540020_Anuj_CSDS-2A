#include<stdlib.h>
#include<stdio.h>

typedef struct Node
{
    int data;
    struct Node* next;
} node;

void insertAtEnd(node** head,int data)
{
    node* temp = (node*)malloc(sizeof(node));
    temp->data = data;
    if(!*head)
        *head = temp;
    else
    {
        Node* s = *head;
        while(s->next)
            s=s->next;
        s->next = temp;
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

node * reverse(node *head)
{
    if(!head || !head->next)
        return head;
    Node *newHead = reverseLinkedList(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
}

int main()
{
    node* head = NULL;
    insertAtEnd(&head,7);
    insertAtEnd(&head,6);
    insertAtEnd(&head,5);
    printLinkedList(head);
    insertAtEnd(&head,4);
    head = reverse(head);
    printLinkedList(head);
    
    return 0;
}
