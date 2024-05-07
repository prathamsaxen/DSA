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

int getLength(Node *head)
{
    if (head == NULL)
    {
        return 0;
    }
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->ptr;
    }
    return count;
}

int middleElementLinkedList(Node *head)
{
    int middle = (getLength(head) / 2) + 1;
    // return middle;
    int count = 1;
    while (count != middle)
    {
        head = head->ptr;
        count++;
    }
    return head->data;
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
    // cout << "Reverse" << endl;
    cout << "Length of Linked List -> " << getLength(head) << endl;
    cout << "Middle Element Index = " << middleElementLinkedList(head) << endl;
    // printLinkedList(head);
    return 0;
}