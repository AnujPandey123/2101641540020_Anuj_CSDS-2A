#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node* add;
}node;
 void mergetwo(node* head1, node* head2){
 	node* newnode=(node*)malloc(sizeof(node));
 	node* s=head1;
 	node* t=head2;
 	while(s!=NULL && t!=NULL){
 		if(s->data<t->data){
 			newnode->data=s->data;
 			s=s->add;
		 }
		 else{
		 	newnode->data=t->data;
		 	t=t->add;
		 }
	 }
	 while(t!=NULL){
	 	newnode->data=t->data;
	 	t=t->add;
	 }
	 while(s!=NULL){
	 	newnode->data=s->data;
	 	s=s->add;
	 }
   print(newnode);
 }

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
    return head;
}
int main(){
	struct node* head1=NULL;
	insert(10,&head1);
	print(head1);
	insert(100,&head1);
	insert(500,&head1);
	print(head1);

	struct node* head2=NULL;
	insert(20,&head2);
	print(head2);
	insert(150,&head2);
	insert(5000,&head2);
  insert(6000,&head2);
	print(head2);
	merge(head1,head2);
  print
}
