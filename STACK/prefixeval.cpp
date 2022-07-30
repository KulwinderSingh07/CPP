#include <iostream>
using namespace std;
#include <string.h>
#include <stack>
int prefev(string &pref)
{
    stack<int> s;
    int i = pref.length();
    while (i >= 0)
    {
        if (pref[i] >= '0' && pref[i] <= '9')
        {
            s.push(pref[i] - '0');
        }
        if (pref[i] == '+')
        {
            int first = s.top();
            s.pop();
            int second = s.top();
            s.pop();
            int third = first + second;
            s.push(third);
        }
        if (pref[i] == '-')
        {
            int first = s.top();
            s.pop();
            int second = s.top();
            s.pop();
            int third = first - second;
            s.push(third);
        }
        if (pref[i] == '*')
        {
            int first = s.top();
            s.pop();
            int second = s.top();
            s.pop();
            int third = first * second;
            s.push(third);
        }
        if (pref[i] == '/')
        {
            int first = s.top();
            s.pop();
            int second = s.top();
            s.pop();
            int third = first / second;
            s.push(third);
        }
        if (pref[i] == '^')
        {
            int first = s.top();
            s.pop();
            int second = s.top();
            s.pop();
            int third = first ^ second;
            s.push(third);
        }
        i--;
    }
    int r = s.top();
    return r;
}
int main()
{
    string pref = "-+7*45+20";
    int i = prefev(pref);
    cout << i;
    return 0;
}