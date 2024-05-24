#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &data,int element)
{
    if(data.empty())
    {
        data.push(element);
        return;
    }
    int x=data.top();
    data.pop();
    insertAtBottom(data,element);
    data.push(x);
}
void reverseStack(stack<int> &data)
{
    if(data.empty())
    {
        return ;
    }
    int topElement=data.top();
    data.pop();
    reverseStack(data);
    insertAtBottom(data,topElement);
}
int main()
{
    stack<int> data;
    data.push(2);
    data.push(4);
    data.push(6);
    data.push(8);
    data.push(10);

    reverseStack(data);
    while (!data.empty())
    {
        cout << data.top() << endl;
        data.pop();
    }
    return 0;
}