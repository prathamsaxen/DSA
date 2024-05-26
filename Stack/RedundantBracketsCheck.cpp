#include <iostream>
#include <stack>
using namespace std;

bool CheckRedundantBrackets(string str)
{
    stack<char> data;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(' || str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
        {
            data.push(str[i]);
        }
        else if (str[i] == ')')
        {
            bool isOperatorFound = false;
            while (!data.empty() && data.top() != '(')
            {
                char top = data.top();
                if (top == '+' || top == '-' || top == '*' || top == '/')
                {
                    isOperatorFound = true;
                }
                data.pop();
            }

            // Pop the opening bracket '('
            if (!data.empty())
            {
                data.pop();
            }

            // If no operator was found between the parentheses, it's redundant
            if (!isOperatorFound)
            {
                return true;
            }
        }
    }

    return false;
}

int main()
{
    string str = "(a+b)";
    cout << CheckRedundantBrackets(str) << endl;
 return 0;
}