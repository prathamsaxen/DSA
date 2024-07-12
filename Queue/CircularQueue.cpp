#include<iostream>
using namespace std;

#include <iostream>
using namespace std;

class MyCircularQueue {
private:
    int* arr;
    int front;
    int rear;
    int max_capacity;
    int size;

public:
    MyCircularQueue(int k) {
        arr = new int[k];
        front = -1;
        rear = -1;
        max_capacity = k;
        size = 0;
    }

    bool enQueue(int value) {
        if (isFull()) {
            return false;
        }
        if (isEmpty()) {
            front = 0;
        }
        rear = (rear + 1) % max_capacity;
        arr[rear] = value;
        size++;
        return true;
    }

    bool deQueue() {
        if (isEmpty()) {
            return false;
        }
        if (front == rear) { // Queue will be empty after this operation
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % max_capacity;
        }
        size--;
        return true;
    }

    int Front() {
        if (isEmpty()) return -1;
        return arr[front];
    }

    int Rear() {
        if (isEmpty()) return -1;
        return arr[rear];
    }

    bool isEmpty() { 
        return size == 0;
    }

    bool isFull() {
        return size == max_capacity;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */
