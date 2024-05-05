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
    ~DoublyLinkedListNode()
    {
        //    std::cout << "Deleting node -> " << this->data << endl;
        // delete this;
        int val = this->data;
        std::cout << "Deleting Node -> " << val << endl;
        std::cout << "Deleting Pointer -> " << next << endl;
    }
};

void printDoublyLinkedList(DoublyLinkedListNode *head)
{
    DoublyLinkedListNode *temp = head;
    while (temp != NULL)
    {
        std::cout << temp->data << " ";
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

void InsertAtPosition(DoublyLinkedListNode *&head, int data, int position)
{
    int count = 1;
    DoublyLinkedListNode *temp = head;
    if (position == 1)
    {
        DoublyLinkedListNode *newNode = new DoublyLinkedListNode(data, NULL);
        // std::cout<<newNode->data;
        // std::cout<<newNode->next;
        // std::cout<<newNode->previous;
        // return;
        newNode->previous = NULL;
        newNode->next = head;
        head->previous = newNode;
        head = newNode;
        return;
        // newNode->next=head;
        // head->previous=newNode;
        // return;
    }
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    // std::cout << count << endl;
    // std::cout << temp->data << endl;
    DoublyLinkedListNode *newNode = new DoublyLinkedListNode(data, temp);
    newNode->next = temp->next;
    temp->next = newNode;
}
void DeletionAtPosition(DoublyLinkedListNode *&head, int Position)
{
    int length = LengthOfDoublyLinkedList(head);
    if (Position == 1)
    {
        DoublyLinkedListNode *temp = head;
        temp->next->previous = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        if (Position == length)
        {
            // Handle deletion at the end
            // std::cout << "Here" << endl;
            DoublyLinkedListNode *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            DoublyLinkedListNode *lastNode = temp->previous;
            lastNode->next = NULL;
            temp->previous = NULL;
            delete temp;
        }
        else
        {
            int count = 1;
            DoublyLinkedListNode *temp = head;
            while (count < Position - 1)
            {
                temp = temp->next;
                count++;
            }
            DoublyLinkedListNode *nextComingNode = temp->next;
            nextComingNode = nextComingNode->next;
            temp->next = nextComingNode;
            DoublyLinkedListNode *deletionNode = nextComingNode;
            deletionNode = deletionNode->previous;
            deletionNode->next = NULL;
            deletionNode->previous = NULL;
            nextComingNode->previous = temp;
        }
    }
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
    std::cout << endl;
    printDoublyLinkedList(node1);
    // InsertionAtHead(node1, -2);
    // std::cout << endl;
    printDoublyLinkedList(node1);
    std::cout << endl;
    // std::cout << LengthOfDoublyLinkedList(node1);

    std::cout << "Printing Linked List" << endl;
    printDoublyLinkedList(node1);

    InsertAtTail(node1, 10);
    std::cout << endl;
    printDoublyLinkedList(node1);
    std::cout << endl;

    InsertAtPosition(node1, 55, 7);
    printDoublyLinkedList(node1);

    std::cout << endl;
    DeletionAtPosition(node1, 7);
    printDoublyLinkedList(node1);

    // std::cout << endl;
    // DeletionAtPosition(node1, 1);
    // printDoublyLinkedList(node1);

    return 0;
}