#include <iostream>
using namespace std;
#define n 100
class stack
{
    int *arr;
    int top;

public:
    stack()
    {
        arr = new int[n];
        top = -1;
    }
    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "Stack overflow" << endl;
            return;
        }
        else
        {
            top++;
            arr[top] = x;
        }
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "stack underflow" << endl;
            return;
        }
        else
        {
            top--;
        }
    }
    int peek()
    {
        if (top == -1)
        {
            cout << "NO element is present" << endl;
            return -1;
        }
        else
        {
            return arr[top];
        }
    }
    bool empty()
    {
        if (top != -1)
        {
            return false;
        }
        return true;
    }
};
int main()
{
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout << s.peek() << endl;
    s.pop();
    cout << s.peek() << endl;
    cout << s.empty() << endl;
    return 0;
}