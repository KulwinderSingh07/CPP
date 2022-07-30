#include <iostream>
using namespace std;
int firstocc(int a, int array[], int n)
{
    static int i = -1;
    if (i == n)
    {
        cout << "element is not present in array";
        return -1;
    }
    i++;
    if (array[i] == a)
    {
        cout << a << " first occurs at " << i << " index";
        return 0;
    }
    firstocc(a, array, n);
}
int lastocc(int a, int array[], int n)
{
    static int i = n;
    if (i == -1)
    {
        cout << "elemetn is not present in the array" << endl;
        return -1;
    }
    i--;
    if (array[i] == a)
    {
        cout << "element last occurs at " << i << "index";
        return 0;
    }
    lastocc(a, array, n);
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
    int a;
    cin >> a;
    firstocc(a, array, n);
    lastocc(a, array, n);
    return 0;
}