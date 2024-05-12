
#include <iostream>
#include <map>
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
bool detectLoop(Node *head)
{
    map<Node *, bool> visited;
    Node *temp = head;
    while (temp != NULL)
    {
        if (visited[temp] == true)
        {
            cout << "LOOP DETECTED: " << temp->data << endl;
            return true;
        }
        visited[temp] = true;
        temp = temp->ptr;
    }
    return false;
}
Node *ReverLinkedListInKGroups(Node *head, int K)
{
    Node *previous = NULL;
    Node *current = head;
    Node *Forward;

    int count = 0;
    while (current != NULL && count < K)
    {

        Forward = current->ptr;
        current->ptr = previous;
        // Forward->ptr = current;
        previous = current;
        current = Forward;
        // Forward = Forward->ptr;
        count++;
    }

    if (Forward != NULL)
    {
        head->ptr = ReverLinkedListInKGroups(Forward, K);
    }
    return previous;
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
    insertAtHead(head, -2);
    insertAtHead(head, -4);
    insertAtHead(head, -6);
    insertAtHead(head, -8);

    printLinkedList(head);
    // head = ReverLinkedListInKGroups(head, 3);
    node2->ptr = head;
    cout<<endl;
    // printLinkedList(newhead);
    cout << detectLoop(head) << endl;

    return 0;
}