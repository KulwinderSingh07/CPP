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