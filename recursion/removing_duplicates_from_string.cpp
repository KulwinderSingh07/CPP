// #include <iostream>
// using namespace std;
// #include <string>
// string remove(string S)
// {
//     if (S.length() == 0)
//     {
//         return "";
//     }
//     char ch = S[0];
//     string sub = remove(S.substr(1));
//     if (ch == sub[0])
//     {
//         return sub;
//     }
//     return (ch + sub);
// }
// int main()
// {
//     cout << remove("aaaabbbbbcccddee") << endl;
//     return 0;
// }
#include <iostream>
using namespace std;
#include <string>
int main()
{
    string s = "aaabbbcccddd";
    int n = s.length();
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            for (int j = i + 1; j < s.length(); j++)
            {
                s[j] = s[j + 1];
            }
            s.erase(s.length(), 1);
        }
    }
    cout << s;
    return 0;
}