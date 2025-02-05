#include <iostream>
using namespace std;

#define MAX 100

class Queue
{
    int arr[MAX];
    int front;
    int rear;

public:

    Queue()
    {
        front = -1;
        rear = -1;
    }

    bool isEmpty()
    {
        return (front == -1);
    }

    bool isFull()
    {
        return (rear == MAX - 1);
    }

    void enqueue(int x)
    {
        if (isFull())
        {
            cout << "Queue is full" << endl;
            return;
        }
        if (isEmpty())
        {
            front = 0;
        }
        arr[++rear] = x;
    }


    int dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        int data = arr[front];
        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front++;
        }
        return data;
    }

    int peek()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[front];
    }
};

int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front element is: " << q.peek() << endl;
    cout << "Dequeued element: " << q.dequeue() << endl;
    cout << "New front element is: " << q.peek() << endl;

    return 0;
}
