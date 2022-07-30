#include <iostream>
using namespace std;
#include <stack>
void insertatbotton(stack<int> &s, int i)
{
    if (s.empty())
    {
        s.push(i);
        return;
    }
    int e = s.top();
    s.pop();
    insertatbotton(s, i);
    s.push(e);
}
void reverse(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }
    int i = s.top();
    s.pop();
    reverse(s);
    insertatbotton(s, i);
}
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    reverse(s);
    cout << s.top();

    return 0;
}