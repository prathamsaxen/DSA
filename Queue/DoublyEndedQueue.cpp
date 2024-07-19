#include <iostream>
using namespace std;

class DoublyEndedQueue
{
    int *arr;
    int front;
    int back;
    int max_capacity;

public:
    DoublyEndedQueue(int digit)
    {
        this->max_capacity = digit;
        arr = new int[max_capacity];
        front = -1;
        back = -1;
    }
    bool full()
    {
        if ((front == 0 && back == max_capacity - 1) || (back == (front - 1) % (max_capacity - 1)))
        {
            return true;
        }
        return false;
    }
    bool push_front(int data_input)
    {
        if (full())
        {
            return false;
        }
        if (front == -1)
        {
            front = back = 0;
        }
        else if (front == 0)
        {
            front = max_capacity - 1;
        }
        else
        {
            front--;
        }
        arr[front] = data_input;
        return true;
    }
    bool push_back(int data_input)
    {
        if (full())
        {
            return false;
        }
        if (front == -1)
        {
            front = back = 0;
        }
        else if ((back == max_capacity - 1) && (front != 0))
        {
            back = 0;
        }
    }
};