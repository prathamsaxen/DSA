#include <iostream>
using namespace std;

class Queue {
    int *arr;
    int front_element;
    int back_element;
    int max_capacity;
public:
    Queue() {
        max_capacity=100000;
        arr = new int[max_capacity];
        front_element=0;
        back_element=0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        if(front_element==back_element)
        {
            return true;
        }
        return false;
    }

    void enqueue(int data) {
        if(back_element==max_capacity)
        {
            cout<<"Stack Overflow!";
        }
        else
        {
            arr[back_element]=data;
            back_element++;
        }
    }

    int dequeue() {
        if(front_element==back_element)
        {
            return -1;
        }
        int ans=arr[front_element];
        arr[front_element]=-1;
        front_element++;
        if(front_element==back_element)
        {
            front_element=0;
            back_element=0;
        }
        return ans;
    }

    int front() {
        if(front_element==back_element)
        {
            return -1;
        }
        return arr[front_element];
    }
};

int main(){
    return 0;
}