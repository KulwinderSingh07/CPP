#include <iostream>
using namespace std;
#include <stack>
bool checkparenth(string s)
{
    int len = s.length();
    stack<char> st;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == '{' || s[i] == '[' || s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == '}')
        {
            if (st.top() == '{')
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
        else if (s[i] == ']')
        {
            if (st.top() == '[')
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
        else if (s[i] == ')')
        {
            if (st.top() == '(')
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
    }
    return st.empty();
}
int main()
{
    string s = "{([]])}";
    cout << checkparenth(s);

    return 0;
}