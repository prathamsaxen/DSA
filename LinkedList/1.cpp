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
        this->next = NULL;
    }
};

void printLinkedList(Node *ptr)
{
    while (ptr->next != NULL)
    {
        cout << ptr->data << endl;
        ptr = ptr->next;
        // cout << ptr->next << endl;
    }
}
void insertAtHead(Node *LinkLList, Node *node)
{
    while (LinkLList->next != NULL)
    {
        LinkLList = LinkLList->next;
    }
    LinkLList->next = node;
    cout << LinkLList->next->data << endl;
    node->next = NULL;
 }

int main()
{
    Node *node1 = new Node(2);
    Node *node2 = new Node(4);
    Node *node3 = new Node(6);

    // node1->next = node2;
    // node2->next = node3;

    // cout << node2->next << endl;
    // printLinkedList(node1);
    Node *node11 = new Node(10);
    insertAtHead(node1, node11);
    printLinkedList(node1);

    return 0;
}