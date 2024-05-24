#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> data;
    data.push(2);
    data.push(4);
    data.push(6);
    data.push(8);
    data.push(10);
    data.push(12);

    int size = data.size();
    int middle = size / 2; // Middle index calculation
    stack<int> tempStack;

    // Move elements from 'data' to 'tempStack' until the middle element
    for (int i = 0; i < middle; ++i) {
        tempStack.push(data.top());
        data.pop();
    }

    // Pop the middle element
    data.pop();

    // Move elements back from 'tempStack' to 'data'
    while (!tempStack.empty()) {
        data.push(tempStack.top());
        tempStack.pop();
    }

    // Print the stack elements
    stack<int> printStack;
    while (!data.empty()) {
        printStack.push(data.top());
        data.pop();
    }
    
    while (!printStack.empty()) {
        cout << printStack.top() << endl;
        printStack.pop();
    }

    return 0;
}
