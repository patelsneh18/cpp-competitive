#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
    struct Node* prev;
};
struct Node* head;

struct Node* GetNewNode(int x) 
{
   struct Node* newNode = new Node;
   newNode->data = x;
    newNode->next=NULL;
    newNode->prev=NULL;
    return newNode;
}

void insertNodeAtHead(int x)
{
    struct Node* newNode = GetNewNode(x);
    if(head==NULL)
    {
        head = newNode;
        return;
    }
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}

void printList()
{
    struct Node* newNode = head;
    while (newNode!=NULL)
    {
        printf("%d ",newNode->data);
        newNode = newNode->next;
    }
}
int main()
{
    int n;
    cin>>n;
    head = NULL;
    int x;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter element: ";
        cin>>x;
        cout<<endl;
        insertNodeAtHead(x);
        cout<<"List is: ";
        printList();
        cout<<endl;
    }
    
    return 0;
}