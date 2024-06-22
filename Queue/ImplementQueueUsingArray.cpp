#include <iostream>
using namespace std;

class Queue
{
public:
    int *arr;
    int front = -1;
    int rear = -1;
    int sizeOfQueue = 0;
    Queue(int data)
    {
        this->sizeOfQueue = data;
        arr = new int[sizeOfQueue];
    }
    bool isEmpty()
    {
        return front == -1 || front > rear;
    }
    bool isFull()
    {
        return rear == sizeOfQueue - 1;
    }
    bool enqueue(int data)
    {
        if (isFull())
        {
            return false;
        }
        if (front == -1)
        {
            front = 0;
        }
        arr[++rear] = data;
        return true;
    }
    int dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        int data = arr[front++];
        if (front > rear)
        {
            front = rear = -1; // Reset the queue
        }
        return data;
    }
    int sizeOfQueue()
    {
        return isEmpty() ? 0 : rear - front + 1;
    }
};

int main()
{
    Queue *data = new Queue(10);
    cout << data->isEmpty() << endl;
    return 0;
}