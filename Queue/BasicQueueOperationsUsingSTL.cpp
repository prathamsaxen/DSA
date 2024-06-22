#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> data;

    data.push(2);
    data.push(3);
    data.push(3);
    data.push(3);
    data.push(3);
    data.push(3);
    data.push(3);
    data.push(3);

    data.pop();

    cout << data.empty() << endl;
    cout << data.size() << endl;
    cout << data.front() << endl;
    return 0;
}