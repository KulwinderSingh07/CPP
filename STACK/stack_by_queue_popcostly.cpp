#include <iostream>
using namespace std;
#include <queue>
class stack
{
    int n;
    queue<int> q1;
    queue<int> q2;

public:
    stack()
    {
        n = 0;
    }
    void push(int val)
    {
        q1.push(val);
    }
    void pop()
    {
        if (q1.empty())
        {
            return;
        }
        while (q1.size() != 1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();
        n--;
        q1.swap(q2);
    }
    int top()
    {
        if (q1.empty())
        {
            return -1;
        }
        while (q1.size() != 1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        int top = q1.front();
        q2.push(q1.front());
        q1.pop();
        q1.swap(q2);
        return top;
    }
};
int main()
{
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout << st.top();
    st.pop();
    cout << st.top();

    return 0;
}