#include <iostream>
using namespace std;
#include <stack>
class queue
{
    stack<int> s1;
    stack<int> s2;

public:
    void enqueue(int val)
    {
        s1.push(val);
    }
    int dequeue()
    {
        if (s1.empty() and s2.empty())
        {
            cout << "queue has underflown";
            return -1;
        }
        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int topval = s2.top();
        s2.pop();
        return topval;
    }
    bool isempty()
    {
        if (s1.empty() and s2.empty())
        {
            return true;
        }
        else
            return false;
    }
};
int main()
{
    queue qu;
    qu.enqueue(1);
    qu.enqueue(2);
    qu.enqueue(3);
    cout << qu.dequeue();
    qu.isempty();

    return 0;
}