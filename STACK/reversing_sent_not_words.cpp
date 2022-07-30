#include <iostream>
using namespace std;
#include <string>
#include <stack>
void reve(string s)
{
    stack<string> st;
    for (int i = 0; i < s.length(); i++)
    {
        string word = "";
        while (s[i] != ' ' && i < s.length())
        {
            word += s[i];
            i++;
        }
        st.push(word);
        // cout << st.top();
    }
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}
int main()
{
    string s = "hello world!";
    reve(s);

    return 0;
}