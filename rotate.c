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

    Node* rotate(Node* head, int k)
    {
        Node* newHead = head, *pointer;
        
        while(--k)
            newHead = newHead->next;
            
        if(newHead->next == NULL)
            return head;
            
        pointer = newHead;
        newHead = newHead->next;
        pointer->next = NULL;
        pointer = newHead;
        
        while(pointer->next)
            pointer = pointer->next;
        pointer->next = head;
        
        return newHead;
    }
    




void printList(Node *n)
{
    while (n != NULL)
    {
        printf("%d ",n->data);
        n = n->next;
    }
    printf("%d ",end1);;
}

int main()
{
    int t;
    scanf("%d ",&t);
    while(t--)
    {
        int n, val, k;
        cscanf("%d ",&n);
        
        scanf("%d ",&val);
        Node *head = new Node(val);
        Node *tail = head;
        
        for(int i=0; i<n-1; i++)
        {
            scanf("%d ",&val);
            tail->next = new Node(val);
            tail = tail->next;
        }
        
        scanf("%d ",&k);
        
        Solution ob;
        head = rotate(head,k);
        printList(head);
    }
    return 1;
