#include <iostream>
#include <queue>
using namespace std;

void PrintQueue(queue<int> input)
{
    while (!input.empty())
    {
        cout << input.front() << "  ";
        input.pop();
    }
}

int main()
{
    queue<int> data;
    data.push(2);
    data.push(4);
    data.push(6);
    data.push(8);
    data.push(10);
    data.push(12);
    PrintQueue(data);

    return 0;
}