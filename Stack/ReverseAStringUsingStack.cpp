#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string str = "Hello World!";
    stack<char> string_data;

    for (int i = 0; i < str.length(); i++)
    {
        string_data.push(str[i]);
    }
    int index = 0;
    while (!string_data.empty())
    {
        str[index] = string_data.top();
        string_data.pop();
        index++;
    }
    cout << str << endl;
    return 0;
}
