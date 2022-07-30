#include <iostream>
using namespace std;
#include <string.h>
#include <stack>
void convert(string &s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            cout << s[i];
        }
        else
        {
            switch (s[i])
            {
            case '(':
                st.push(s[i]);
                break;
            case '+':
                while (st.top() != '(')
                {
                    cout << st.top();
                    st.pop();
                }
                st.push(s[i]);
                break;
            case '-':
                while (st.top() != '(')
                {
                    cout << st.top();
                    st.pop();
                }
                st.push(s[i]);
                break;
            case '*':
                st.push(s[i]);
                break;
            case '/':
                st.push(s[i]);
                break;
            case ')':
                while (st.top() != '(')
                {
                    cout << st.top();
                    st.pop();
                }
                st.pop();
                break;

            default:
                break;
            }
        }
    }
    cout << st.top();
}
int main()
{
    string s = "(a-b/c)*(a/k-l)";
    convert(s);

    return 0;
}