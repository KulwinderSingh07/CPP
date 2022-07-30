#include <iostream>
using namespace std;
#include <string>
int main()
{
    string str1(5, 'o');
    cout << str1 << endl;
    string str2 = "hello";
    cout << str2 << endl;
    string str3;
    getline(cin, str3); // with getline we can take a sentence as an input with spaces in between words which is not possible with only the string
    cout << str3;

    return 0;
}