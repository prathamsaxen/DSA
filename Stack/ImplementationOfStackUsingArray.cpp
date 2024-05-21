#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr;
    int topIndex = -1;
    int sizeOfStack;

    Stack(int data)
    {
        this->sizeOfStack = data;
        arr = new int[sizeOfStack];
    }
    bool isEmpty()
    {
        return topIndex == -1 ? true : false;
    }
    int peek()
    {
        return arr[topIndex];
    }
    int size()
    {
        return topIndex + 1;
    }
    void push(int data)
    {
        if (topIndex < sizeOfStack)
        {
            topIndex++;
            arr[topIndex] = data;
        }
        else
        {
            cout << "Stack Overflow" << endl;
        }
    }
    void pop()
    {
        if (topIndex >= 0)
        {
            topIndex--;
        }
        else
        {
            cout << "Stack is Empty" << endl;
        }
    }
};
int main()
{
    Stack *ptr = new Stack(10);
    cout << ptr->isEmpty() << endl;
    ptr->pop();
    ptr->push(2);
    ptr->push(4);
    ptr->push(6);
    cout << "Size of Stack => " << ptr->size() << endl;
    ptr->pop();
    cout << "Size of Stack After Deletion => " << ptr->size() << endl;

    cout << " Peek Element of Stack => " << ptr->peek() << endl;
    return 0;
}