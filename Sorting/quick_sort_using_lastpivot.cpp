#include <iostream>
using namespace std;
int partition(int a[], int l, int h)
{
    int pivot = a[h];
    int i = l - 1;
    int j = l;
    for (; j <= h - 1; j++)
    {
        if (a[j] <= a[h])
        {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[h]);
    return i + 1;
}
int quick(int a[], int l, int h)
{
    if (l < h)
    {
        int q = partition(a, l, h);
        quick(a, l, q - 1);
        quick(a, q + 1, h);
    }
}
int main()
{
    int a[5] = {1, 33, 54, 22, 3};
    quick(a, 0, 4);
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}