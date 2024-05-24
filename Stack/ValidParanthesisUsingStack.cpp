#include <iostream>
#include <stack>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> valid;
        bool validationCheck = true;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '[' || s[i] == '(' || s[i] == '{')
            {
                valid.push(s[i]);
            }
            else
            {
                if (!valid.empty())
                {
                    if (s[i] == ')' && valid.top() == '(')
                    {
                        valid.pop();
                    }
                    else if (s[i] == '}' && valid.top() == '{')
                    {
                        valid.pop();
                    }
                    else if (s[i] == ']' && valid.top() == '[')
                    {
                        valid.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
                else
                {
                    return false;
                }
            }
        }
        if (valid.empty())
        {
            return true;
        }
        return false;
    }
};