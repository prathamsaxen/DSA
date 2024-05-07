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

void ReverseLinkedList(Node *&head)
{
    Node *temp = head;
    while (temp->ptr != NULL)
    {
        Node *curent = temp;
        temp = temp->ptr;
        Node *current2 = temp;
        current2->ptr = curent;
    }
    cout << temp->data << endl;
    head->ptr=NULL;
    head=temp;
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
    cout << "Reverse" << endl;
    ReverseLinkedList(head);
    printLinkedList(head);
    return 0;
}