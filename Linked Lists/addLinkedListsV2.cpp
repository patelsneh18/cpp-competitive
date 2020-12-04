#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void insertNode(int x,Node* head)
{
    struct Node* temp = (Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next =head;
    head = temp;
}

struct Node* buildList(int size)
{
    int val;
    cin>>val;
    Node* headNode = new Node(val);
    Node* tail = headNode;

    for (int i = 0; i < size-1; i++)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    return headNode;
}

void printList(struct Node* headN)
{
    struct Node *newNode = headN;
    cout << "\n";
    while (newNode != NULL)
    {
        cout << newNode->data << "->";
        newNode = newNode->next;
    }
}

struct Node* reverseList(struct Node *head)
{
    Node *current = head;
    Node *prev=NULL;
    Node* next = NULL;
    while (current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev = current;
        current = next;
    }
    head=prev;
    return head;
}

int lengthFinder(Node* head)
{
    Node* newNode = head;
    int count = 1;
    while (newNode->next != NULL)
    {
        newNode = newNode->next;
        count++;
    }
    return count;
}

struct Node* addTwoLists(struct Node* first, struct Node* second)
{
    int l1 = lengthFinder(first);
    int l2 = lengthFinder(second);

    if(l1>l2)
    {
        insertNode(1,second);
    }

    else if(l2>l1)
    {
        for (int i = 0; i < l2-l1; i++) insertNode(0,first);
    }

    Node* reverse2 = reverseList(second);
    Node* reverse1 = reverseList(first);

    Node* list1 = reverse1;
    Node* list2 = reverse2;
    int carry = 0, remainder = 0, division = 0, addition = 0;
    printList(reverse2);
    struct Node* addList = new Node(NULL);
    while (reverse1 != NULL )
    {
        addition = carry + reverse1->data + reverse2->data;
        if(addition>=10)
        {
            division = addition/10;
            remainder = addition%10;
            carry = division;
            insertNode(remainder,addList);
        }
        else {
            insertNode(addition,addList);
            carry = 0;
        }
        reverse1 = reverse1->next;
        reverse2 = reverse2->next;
    }
    return addList;
}

int main()
{
    int n,m;
    cout<<"Enter n:"<<endl;
    cin>>n;
    cout<<"Enter m:"<<endl;
    cin>>m;
    Node* first = buildList(n);
    Node* second = buildList(m);
    Node* res = addTwoLists(first,second);
    printList(res);
    return 0;
}