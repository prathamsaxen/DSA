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
    ~Node()
    {
        cout << "Deleting -> " << this->data << endl;
        if (this->next == NULL)
        {
            delete this;
        }
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

void DeleteAtPosition(Node *&head, int position)
{
    int index = 1;
    Node *temp = head;
    if (position == 1)
    {
        Node *deletingNode = head;
        head = head->next;
        deletingNode->next = NULL;
        delete deletingNode;
        return;
    }
    while (index < position - 1)
    {
        index++;
        temp = temp->next;
    }
    // cout << temp->data << " ";
    Node *previousNode = temp;
    Node *deletingNode = temp->next;
    Node *nextNode = temp->next;
    nextNode = nextNode->next;
    previousNode->next = nextNode;
    // cout<<deletingNode->data<<endl;
    delete deletingNode;
}

int main()
{
    Node *head = new Node(1);
    Node *node2 = new Node(2);
    Node *node3 = new Node(3);
    Node *node4 = new Node(4);
    head->next = node2;
    node2->next = node3;
    node3->next = node4;
    printLinkedList(head);
    cout << endl;
    DeleteAtPosition(head, 2);
    cout << endl;
    printLinkedList(head);
    return 0;
}