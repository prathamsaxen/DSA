#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *ptr;

    Node (Node *copy)
    {
        this->data=copy->data;
        this->ptr=copy->ptr;
    }

    Node(int data)
    {
        this->data = data;
        this->ptr = NULL;
    }
};

int main()
{
    Node *node1 = new Node(25);
    cout << node1->data << endl;
    cout << node1->ptr << endl;

    // Copy Constructor
    cout<<"Copy Constructor"<<endl;
    Node *node2=new Node(node1);
    cout<<node2->data << endl;
    cout<<node2->ptr << endl;
    return 0;
}