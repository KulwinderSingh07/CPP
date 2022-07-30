#include <iostream>
using namespace std;
bool compare(int a[], int n)
{
    if (n == 0 || n == 1)
        return true;
    if (a[0] > a[1])
        return false;
    bool smallersorted = compare(a + 1, n - 1);
    return smallersorted;
}
int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int z;
    z = compare(array, n);
    if (z)
        cout << "array is sorted";
    else
        cout << "array is not sorted";

    return 0;
}