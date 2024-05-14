#include <iostream>
#include <map>

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
void printLinkedList(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void SortLinkedList012(Node *&head)
{
    int zero = 0, one = 0, two = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == 0)
        {
            zero++;
        }
        else if (temp->data == 1)
        {
            one++;
        }
        else
        {
            two++;
        }
        temp = temp->next;
    }
    // cout << "zero" << zero << endl;
    // cout << "zero" << one << endl;
    // cout << "zero" << two << endl;

    int count = 0;
    temp = head;
    // cout<<""
    while (count < zero)
    {
        temp->data = 0;
        temp = temp->next;
        count++;
    }
    count = 0;
    while (count < one)
    {
        temp->data = 1;
        temp = temp->next;
        count++;
    }
    count = 0;
    while (count < two)
    {
        temp->data = 2;
        temp = temp->next;
        count++;
    }
}
int main()
{
    Node *head = new Node(2);
    Node *node2 = new Node(0);
    Node *node3 = new Node(1);
    Node *node4 = new Node(1);
    Node *node5 = new Node(0);
    Node *node6 = new Node(2);
    // Node *node7 = new Node(1);

    head->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;
    printLinkedList(head);
    cout << endl;
    SortLinkedList012(head);
    printLinkedList(head);
    return 0;
}