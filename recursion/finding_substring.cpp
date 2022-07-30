#include <iostream>
using namespace std;
void sustr(string s, string z)
{
    if (s.length() == 0)
    {
        cout << z << endl;
        return;
    }
    char ch = s[0];
    string sub = s.substr(1);
    sustr(sub, z);
    sustr(sub, z + ch);
}
int main()
{
    string s = "abc";
    sustr(s, "");
    cout << endl;

    return 0;
}