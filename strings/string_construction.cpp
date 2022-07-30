#include <iostream>
using namespace std;
#include <string>
int main()
{
    string str; // dont require size beforehand
    cin >> str;
    // string terminates with /0
    // concatenation and append is easier
    cout << str;

    return 0;
}