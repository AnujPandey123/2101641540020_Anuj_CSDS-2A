#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct Node* next;
} node;
void insertAtHead(Node** head,int data)
{
    Node* temp = (Node*)calloc(1,sizeof(Node));
    temp->data = data;
    if(!*head)
        *head = temp;
    else
    {
        temp->next = *head;
        *head = temp;
    }
}
void insertatpos(int data1,int addbef,node** head){
	node* s;
	node* temp=(struct node*)malloc(sizeof(struct node));
	s=head;
	while(s->data!=addbef){
		s=s->data;
	}
	a=s->address;
	s->address->temp;
	temp->address=a;
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
    insertatpos(7,0,&head);
    insertatpos(9,5,&head);
    insertatpos(8,4,&head);

   
    printLinkedList(head);

    return 0;
}
