#include <iostream>
#include <stack>
#include <string.h>
using namespace std;
int evaluate(string &s)
{
    stack<int> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            st.push(s[i] - '0');
        }
        else
        {
            int first = st.top();
            st.pop();
            int second = st.top();
            st.pop();
            switch (s[i])
            {
            case '+':
                st.push(first + second);
                break;
            case '-':

                st.push(second - first);
                break;
            case '*':

                st.push(second * first);
                break;
            case '/':

                st.push(second / first);
                break;
            }
        }
    }
    return st.top();
}
int main()
{
    string s = "46+2/5*7+";
    cout << evaluate(s);

    return 0;
}