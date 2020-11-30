#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;
    Node(int x){
        data = x;
        next = NULL;
    }
};  
// Node* head = NULL;
// int insertNode(int x){
//     Node* newNode = new Node(x);
//     Node* temp = head;
//     while(temp!=NULL){
//         temp = temp->next;
//     }
//     newNode->next = 

// }
void loopHere(Node* head, Node* tail, int pos){
    Node* walk = head;
    for (int i = 0; i < pos; i++) walk = walk->next;
    tail->next = walk;
}

bool detectLoop(Node* head)
{
    Node* fast = head;
    Node* slow = head;
    while(slow != NULL || fast != NULL || fast->next != NULL || fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) return true;
    }
    return false;
}

int main()
{
    int length,n;
    cin>>length;
    cin>>n;
    struct Node* head,*tail = new Node(n);
    for (int i = 0; i < length; i++)
    {
        cin>>n;
        tail->next = new Node(n);
        tail = tail->next;
    }
    int x;
    cin>>x;
    loopHere(head,tail,x);
    if(detectLoop) cout<<true<<endl;
    else cout<<false<<endl;
    return 0;
}