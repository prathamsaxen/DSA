#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

void printLinkedList(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void RemoveDuplicatesFromSortedLinkedList(Node *&head)
{
    // bool removed = false;
    Node *temp = head;
    while (temp->next != NULL)
    {
        if (temp->data == temp->next->data)
        {
            if (temp->next->next != NULL)
            {
                temp->next->data = temp->next->next->data;
                temp->next = temp->next->next;
            }
            else
            {
                temp->next = NULL;
            }
            // removed = true;
        }
        else
        {
            temp = temp->next;
        }
    }
    // return removed;
}
int main()
{
    Node *head = new Node(1);
    Node *node2 = new Node(2);
    Node *node3 = new Node(2);
    Node *node4 = new Node(2);
    Node *node5 = new Node(4);
    head->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    printLinkedList(head);
    RemoveDuplicatesFromSortedLinkedList(head);
    cout<<endl;
    printLinkedList(head);
    return 1;
}