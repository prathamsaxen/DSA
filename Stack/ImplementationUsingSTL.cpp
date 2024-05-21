#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> stack_data;
    stack_data.push(2);
    stack_data.push(4);
    stack_data.push(6);
    stack_data.push(8);

    cout << "Element at Top-> " << stack_data.top() << endl;
    // cout << "Delete Default Element: " << stack_data.pop() << endl;
    stack_data.pop();
    cout << "Element at Top After Deletion-> " << stack_data.top() << endl;
    cout << "Size of Stack => " << stack_data.size() << endl;

    cout << "Stack is Empty? " << stack_data.empty() << endl;

    return 0;
}