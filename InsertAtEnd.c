#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct node{
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
int main(){
	struct node* head=NULL;
	insert(10,&head);
	print(head);
	insert(100,&head);
	insert(5,&head);
	print(head);
	
}
