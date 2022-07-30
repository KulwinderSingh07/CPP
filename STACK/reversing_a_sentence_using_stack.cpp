#include <iostream>
using namespace std;
#include <string>
#include <stack>
void reverse(string s)
{
    stack<char> S;
    int i = s.length();
    int j = 0;
    while (i)
    {
        S.push(s[j]);
        j++;
        i--;
    }
    while (!S.empty())
    {
        cout << S.top();
        S.pop();
    }
}
int main()
{
    string s = "hello world!";
    reverse(s);

    return 0;
}