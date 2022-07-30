#include <iostream>
using namespace std;
#include <string>
int main()
{
    string s1 = "fam";
    string s2 = "ily";
    s1.append(s2); // append function is used to merge the two strings
    cout << s1 << endl;
    string s3 = "fam";
    string s4 = "ily";
    cout << s3 + s4 << endl;
    string s5 = "fam";
    string s6 = "ily";
    s5 = s5 + s6;
    cout << s5 << endl;
    string s7;
    s7 = "ki haal aa sohneo mitra da taa vadia";
    s7.clear();
    cout << s7 << endl;

    return 0;
}