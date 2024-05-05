#include <iostream>
using namespace std;

class DoublyLinkedList
{
public:
    int data;
    DoublyLinkedList *next;
    DoublyLinkedList *previous;

    DoublyLinkedList(int data)
    {
        this->data = data;
        this->next = NULL;
        this->previous = NULL;
    }
};

void TraversalDoublyLinkedList(DoublyLinkedList *&node)
{
    DoublyLinkedList *start = node;
    cout << start->data << endl;
    start = start->next;
    while (node != start)
    {
        cout << start->data << endl;
        start = start->next;
    }
}

int main()
{
    DoublyLinkedList *node1 = new DoublyLinkedList(1);
    DoublyLinkedList *node2 = new DoublyLinkedList(2);
    DoublyLinkedList *node3 = new DoublyLinkedList(3);
    DoublyLinkedList *node4 = new DoublyLinkedList(4);

    node1->previous = node4;
    node1->next = node2;

    node2->previous = node1;
    node2->next = node3;

    node3->previous = node2;
    node3->next = node4;

    node4->previous = node3;
    node4->next = node1;

    TraversalDoublyLinkedList(node1);
    return 0;
}