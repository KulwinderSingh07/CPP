#include <iostream>
using namespace std;
int fibonaci(int n)
{
    if (n == 0 || n == 1)
        return n;
    return fibonaci(n - 1) + fibonaci(n - 2);
}
int main()
{
    int n;
    cin >> n;
    int z;
    z = fibonaci(n);
    cout << z;
    return 0;
}