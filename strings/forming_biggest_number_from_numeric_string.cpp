#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    // string s = "432434565";
    // sort(s.begin(), s.end());
    // cout << s << endl;
    // int i;
    // string S;
    // for (i = s.length() - 1; i >= 0; i--)
    // {
    //     S = s[i];
    // }
    // cout << S;
    string s = "432434565";
    sort(s.begin(), s.end(), greater<int>());
    cout << s;
    return 0;
}