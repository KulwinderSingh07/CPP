#include <iostream>
using namespace std;
#include <stack>
#include <string>
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
    stack<char> z;
    for (int i = 0; i < s.length(); i++)
    {
        z.push(s[i]);
    }
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = z.top();
        z.pop();
    }
    cout << s << endl;
    s.replace(s.find("("), 1, ")");
    s.replace(s.find(")"), 1, "(");
    cout << s;
    convert(s);

    return 0;
}