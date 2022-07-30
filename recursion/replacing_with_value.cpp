#include <iostream>
using namespace std;
#include <string>
void replace(string S)
{
    if (S.length() == 0)
    {
        return;
    }
    if (S[0] == 'p' && S[1] == 'i')
    {
        cout << "3.14";
        replace(S.substr(2));
    }
    else
    {
        cout << S[0];
        replace(S.substr(1));
    }
}
int main()
{
    string S = "pippxxppiixipi";
    replace(S);
    return 0;
}