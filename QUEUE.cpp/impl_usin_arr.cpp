#include <iostream>
using namespace std;
#define n 20
class queue
{
private:
    int *arr;
    int front;
    int rear;

public:
    queue()
    {
        arr = new int[n];
        front = -1;
        rear = -1;
    }
    void enqueue(int val)
    {
        if (rear == n - 1)
        {
            cout << "queue has overflown";
        }
        else
        {
            rear++;
            arr[rear] = val;
        }
        if (front == -1)
            front++;
    }
    void dequeue()
    {
        if (front > rear or front == n)
        {
            cout << "queue has underflown";
            return;
        }
        else
        {
            front++;
        }
    }
    int peek()
    {
        if (front == -1 or front > rear)
        {
            cout << "no element in queue";
            return -1;
        }
        else
            return arr[front];
    }
    bool isempty()
    {
        if (front == -1 or front > rear)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    queue qu;
    qu.enqueue(1);
    cout << qu.isempty();
    qu.peek();
    qu.dequeue();
    cout << qu.isempty();

    return 0;
}