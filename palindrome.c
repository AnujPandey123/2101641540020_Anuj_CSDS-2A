#include<stdio.h>
#include<stdlib.h>

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};



   Node* middleLinkedList(Node* head)
    {
        Node* a = head, *b= head;
        while(a&& a->next &&a->next->next)
        {
            b = b->next;
            a = a->next->next;
        }
        return b->next;
    }
    
    Node* reverseLinkedList(Node* head)
    {
        if(!head || !(head->next))
            return head;
        Node*newHead = reverseLinkedList(head->next);
        head->next->next = head;
        head->next = NULL;
        return newHead;
    }
    bool isPalindrome(Node *head)
    {
        Node* mid = middleLinkedList(head); 
        Node* newHead = reverseLinkedList(mid);
        while(newHead)
        {
            if(newHead->data != head->data)
                return false;
            newHead = newHead->next;
            head = head->next;
        }
        return true;
    }



int main()
{
  int T,i,n,l,a;
    scanf("%d,&T);
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        scanf("%d,&n);
        
        scanf("%d,&a);;
        head = new Node(a);
        tail = head;
        
        for(i=1;i<n;i++)
        {
            scanf("%d,&l);;
            tail->next = new Node(l);
            tail = tail->next;
        }
    printf("isPalindrome(head)");
    }
    return 0;
}
