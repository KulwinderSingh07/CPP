#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};
class queue
{
    node *front;
    node *rear;

public:
    queue()
    {
        front = NULL;
        rear = NULL;
    }
    void enqueue(int val)
    {
        node *n = new node(val);
        if (front == NULL)
        {
            rear = n;
            front = n;
            return;
        }
        rear->next = n;
        rear = rear->next;
        rear->next = NULL;
    }
    void dequeue()
    {
        if (front == NULL)
        {
            cout << "the queue is empty";
            return;
        }
        node *dletethis = front;
        front = front->next;
        delete (dletethis);
    }
    int peek()
    {
        if (front == NULL)
        {
            cout << "there is no element in queue";
            return -1;
        }
        return front->data;
    }
    bool isempty()
    {
        return (front == NULL ? true : false);
    }
};
int main()
{
    queue qu;
    qu.enqueue(1);
    qu.enqueue(2);
    qu.enqueue(3);
    cout << qu.peek() << endl;
    qu.dequeue();
    cout << qu.peek() << endl;

    return 0;
}