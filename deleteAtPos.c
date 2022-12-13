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
           s= s->next;
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

void deletionBefore(node **head,int data)
{
    node *s = *head;
    if(s->next->data == data)
    {
        *head =s->next;
        free(s);
    }
    else
    {
        while(ts->next->next->data != data)
            s = s->next;
        node *temp = s->next;
        s->next = s->next->next;
        free(temp);
    }
}

int main()
{
    Node* head = NULL;
    insertAtEnd(&head,7);
    insertAtEnd(&head,6);
    insertAtEnd(&head,5);
    insertAtEnd(&head,4);
    printLinkedList(head);
    deletionBefore(&head,5);
    printLinkedList(head);

    return 0;
}
