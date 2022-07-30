#include <iostream>
using namespace std;
/*int print(int n)
{
    static int i = 0;
    i++;
    if (i <= n)
    {
        cout << i;
    }
    else
        return 0;
    print(n);
}*/
void print(int n)
{
    if (n == 1)
    {
        cout << "1" << endl;
        return;
    }
    print(n - 1);
    cout << n << endl;
}
int main()
{
    int n;
    cin >> n;
    print(n);
    return 0;
}