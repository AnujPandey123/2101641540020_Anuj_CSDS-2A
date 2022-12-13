
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
typedef struct node{
	int data;
	struct node* address;
};
void insert(int data1,struct node* head){
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	struct node* s;
	temp->data=data1;
	temp->address=NULL;
	if(head==NULL){
		head=temp;
	}
	else{
		s=head;
		while(s->next!=NULL){
			s=s->address;
		}
		s->address=temp;
	}
}
void print(head){
	struct node* s;
	s=head;
	while(s!=NULL){
		printf("%d",s->data);
		printf("->");
		s=s->address;
	}
}
int size(node* head)
{
    int length = 0;
    while (head)
    {
        length++;
        head = head->next;
    }
    return length;
}


int mid(node* head)
{
    int length = size(head), mid;
    if(length&1)
        mid = length/2;
    else
        mid = length/2 - 1;
    while (mid--)
        head = head->next;
    return head->data;
}
int main(){
	struct node* head=NULL;
	insert(10,&head);
	print(head);
	insert(100,&head);
	insert(5,&head);
  insert(7,&head);
  insert(4,&head);
	print(head);
	printf("%d\n",mid(head));
}
