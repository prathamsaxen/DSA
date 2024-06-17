#include<stack>

class SpecialStack {
    public:
    stack <int> s;
    int mini;

    void push(int data) {
        if(s.empty())
        {
            s.push(data);
            mini=data;
        }
        else
        {
            if(data<mini)
            {
                int val=2*data-mini;
                s.push(val);
                mini=data;
            }
            else
            {
                s.push(data);
            }
        }
    }

    void pop() {
        if(s.empty())
        {
            // return -1;
        }
        else
        {
            int topelement=s.top();
            s.pop();
            if(topelement>mini)
            {
                // return topelement;
            }
            else
            {
                int prevMini=mini;
                mini=2*prevMini-topelement;
                // return prevMini;
            }
        }
    }

    int top() {
            if(s.empty())
            {
                return -1;
            }
            else
            {
                int current=s.top();
                if(current>mini)
                {
                    return current;
                }
                else
                {
                    return mini;
                }
            }
    }

    int getMin() {
        
        return mini;
    }  
};