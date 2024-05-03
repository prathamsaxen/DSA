#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *ptr;
    Node(int data)
    {
        this->data = data;
        this->ptr = NULL;
    }
};

void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->ptr = head;
    head = temp;
}

void printLinkedList(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->ptr;
    }
}

void insertAtTail(Node *&head, int data)
{
    Node *temp = head;
    Node *newNode = new Node(data);
    while (temp->ptr != NULL)
    {
        temp = temp->ptr;
    }
    temp->ptr = newNode;
}

int main()
{
    Node *head = new Node(2);
    Node *node2 = new Node(4);
    Node *node3 = new Node(6);

    head->ptr = node2;
    node2->ptr = node3;
    printLinkedList(head);
    cout << endl;
    insertAtHead(head, 0);
    printLinkedList(head);
    cout<<endl;
    insertAtTail(head,8);
    printLinkedList(head);    

    return 0;
}