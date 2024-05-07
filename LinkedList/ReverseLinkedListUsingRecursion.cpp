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
    Node *previous = NULL;
    Node *current = head;
    while (current != NULL)
    {
        Node *next = current->ptr;
        current->ptr = previous;
        previous = current;
        current = next;
    }
    head = previous;
}

void ReverseLinkedListUsingRecursion(Node *&head, Node *Current, Node *Previous)
{
    if (Current == NULL)
    {
        head = Previous;
        return;
    }
    ReverseLinkedListUsingRecursion(head, Current->ptr, Current);
    Current->ptr = Previous;
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
    cout << "Again!";
    ReverseLinkedListUsingRecursion(head, head, NULL);
    printLinkedList(head);
    return 0;
}