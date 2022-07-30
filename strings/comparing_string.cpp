#include <iostream>
using namespace std;
int main()
{
    string s1 = "abc";
    string s2 = "xyz";
    if (s1.compare(s2) != 0)
    {
        cout << "strings are not equal";
    }
    else
        cout << "string are equal";

    return 0;
}