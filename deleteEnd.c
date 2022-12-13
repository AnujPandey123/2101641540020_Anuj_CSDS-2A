#include<stdio.h>
#include<stdlib.h>
#include<math.h>
typedef struct node{
	int data;
	struct node* address;
} node;
void deleteend(node** head){
	node* temp=(struct node*)malloc(sizeof(struct node));
	node* s;
	s=head;
	while(s->address->address!=NULL){
		s=s->address;
	}
	temp=s->address;
	s->address=NULL;
	free(temp);
}
void insert(int data1,node** head){
	node* temp=(struct node*)malloc(sizeof(struct node));
	node* s;
	temp->data=data1;
	temp->address=NULL;
	if(*head==NULL){
		*head=temp;
	}
	else{
		s=*head;
		while(s->address!=NULL){
			s=s->address;
		}
		s->address=temp;
	}
}
void print(node* head){
	node* s;
	s=head;
	while(s!=NULL){
		printf("%d",s->data);
		printf("->");
		s=s->address;
	}
}
int main(){
  insert(10,&head);
	print(head);
	insert(100,&head);
	insert(5,&head);
	node* head=NULL;
	deleteend(&head);
	print(head);
	
}
