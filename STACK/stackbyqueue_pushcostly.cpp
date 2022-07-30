#include <iostream>
using namespace std;
#include <queue>
class stack
{
    queue<int> q1;
    queue<int> q2;

public:
    void push(int val)
    {
        q2.push(val);
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.swap(q2);
    }
    void pop()
    {

        q1.pop();
    }
    int top()
    {
        return q1.front();
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

    return 0;
}