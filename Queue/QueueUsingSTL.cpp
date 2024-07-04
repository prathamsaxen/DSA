#include <queue>
#include <iostream>
using namespace std;

int main()
{
    queue<int> data;
    cout << "Check Queue is Empty or Not => " << data.empty() << endl;
    cout << "Check Size Of Queue => " << data.size() << endl;

    data.push(2);
    data.push(4);
    data.push(6);
    data.push(8);
    data.push(10);

    cout << "Front Element => " << data.front() << endl;
    cout << "Check Size Of Queue => " << data.size() << endl;
    cout << "Check Queue is Empty or Not => " << data.empty() << endl;
    cout << "Back Element => " << data.back() << endl;

    return 0;
}