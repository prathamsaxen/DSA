#include <iostream>
using namespace std;

class DoublyLinkedListNode
{
public:
    int data;
    DoublyLinkedListNode *previous;
    DoublyLinkedListNode *next;

    DoublyLinkedListNode(int data)
    {
        this->data = data;
        this->previous = NULL;
        this->next = NULL;
    }

    DoublyLinkedListNode(int data, DoublyLinkedListNode *prev)
    {
        this->data = data;
        this->previous = prev;
        this->next = NULL;
    }
};

void printDoublyLinkedList(DoublyLinkedListNode *head)
{
    DoublyLinkedListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void InsertionAtHead(DoublyLinkedListNode *&head, int data)
{
    DoublyLinkedListNode *newNode = new DoublyLinkedListNode(data, head);
    newNode->next = head;
    head = newNode;
}

int LengthOfDoublyLinkedList(DoublyLinkedListNode *head)
{
    DoublyLinkedListNode *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void InsertAtTail(DoublyLinkedListNode *&head, int data)
{
    DoublyLinkedListNode *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    DoublyLinkedListNode *newNode = new DoublyLinkedListNode(data, temp);
    temp->next = newNode;
}
int main()
{
    DoublyLinkedListNode *node1 = new DoublyLinkedListNode(2);
    DoublyLinkedListNode *node2 = new DoublyLinkedListNode(4, node1);
    DoublyLinkedListNode *node3 = new DoublyLinkedListNode(6, node2);
    DoublyLinkedListNode *node4 = new DoublyLinkedListNode(8, node3);

    // Linking

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;

    printDoublyLinkedList(node1);
    InsertionAtHead(node1, 0);
    cout << endl;
    printDoublyLinkedList(node1);
    InsertionAtHead(node1, -2);
    cout << endl;
    printDoublyLinkedList(node1);
    cout << endl;
    cout << LengthOfDoublyLinkedList(node1);

    cout << "Printing Linked List" << endl;
    printDoublyLinkedList(node1);

    InsertAtTail(node1, 10);
    cout << endl;
    printDoublyLinkedList(node1);

    return 0;
}