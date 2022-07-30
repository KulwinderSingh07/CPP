#include <iostream>
using namespace std;
int main()
{
    string s1 = "hello ji";
    cout << s1 << endl;
    s1.erase(3, 1); // s1.erase(index from which it needs to delete the string,how many number of characters it need to delete in the string)
    cout << s1;

    return 0;
}