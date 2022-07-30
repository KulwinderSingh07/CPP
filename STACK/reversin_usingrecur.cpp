#include <iostream>
using namespace std;
#include <stack>
void push_at_end(stack<int> &st, int el)
{
    if (st.empty())
    {
        st.push(el);
        return;
    }
    int another = st.top();
    st.pop();
    push_at_end(st, el);
    st.push(another);
}
void reverse(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }
    int el = st.top();
    st.pop();
    reverse(st);
    push_at_end(st, el);
}
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    reverse(st);
    cout << st.top();
    return 0;
}