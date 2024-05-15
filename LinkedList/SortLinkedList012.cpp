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

void insertAtTail(Node *&Tail, Node *Current)
{
    Tail->next = Current;
    Tail = Current;
}

Node *SortLinkedListFor012WithoutChangingData(Node *&head)
{
    Node *temp = head;
    Node *Zero = new Node(-1);
    Node *ZeroTail = Zero;
    Node *One = new Node(-1);
    Node *OneTail = One;
    Node *Two = new Node(-1);
    Node *TwoTail = Two;

    while (temp != NULL)
    {
        if (temp->data == 0)
        {
            insertAtTail(ZeroTail, temp);
            // cout << "Entered => temp-> data" << temp->data << endl;
        }
        else if (temp->data == 1)
        {
            insertAtTail(OneTail, temp);
            // cout << "Entered => temp-> data" << temp->data << endl;
        }
        else if (temp->data == 2)
        {
            insertAtTail(TwoTail, temp);
            // cout << "Entered => temp-> data" << temp->data << endl;
        }
        temp = temp->next;
    }
    // cout<<"One"<<One->data;
    // cout<<"One"<<One->next->data;
    Node *Newhead = Zero->next;
    ZeroTail->next = One->next;
    OneTail->next = Two->next;
    TwoTail->next = NULL;
    return Newhead;
}
int main()
{
    Node *head = new Node(2);
    Node *node2 = new Node(0);
    Node *node3 = new Node(1);
    Node *node4 = new Node(1);
    Node *node5 = new Node(0);
    Node *node6 = new Node(2);

    head->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;
    printLinkedList(head);
    cout << endl;
    Node *sorted = SortLinkedListFor012WithoutChangingData(head);
    printLinkedList(sorted);
    return 0;
}