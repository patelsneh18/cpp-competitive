#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void display(struct Node *head)
{
   while(head->next!=NULL)
   {
      printf("%d ",head->data);
       head = head->next;
   }
   printf("%d ",head->data);
   
}

Node * removeDuplicates( Node *head) 
{
    Node* newNode = head;
    while(newNode!=NULL){
        Node* temp = newNode->next;
        if(temp->data == newNode->data){
            
            newNode->next = temp->next;
        }
        newNode = newNode->next;
    }
}

int main()
{
    int n, num;
        cin>>n;
        
        Node *head, *tail;
        cin>> num;
        head = tail = new Node(num);
        
        for(int i=0 ; i<n-1 ; i++)
        {
            cin>> num;
            tail->next = new Node(num);
            tail = tail->next;
        }

        Node* res = removeDuplicates(head);
        display(res);
    return 0;
}