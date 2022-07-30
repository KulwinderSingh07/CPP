#include <iostream>
using namespace std;
int search(int beg, int end, int array[0], int n)
{
    if (beg <= end)
    {
        int k = (beg + end) / 2;
        if (array[k] == n)
        {
            return k + 1;
        }
        if (array[k] < n)
        {
            return search(k, end, array, n);
        }
        if (array[k] > n)
        {
            return search(beg, k, array, n);
        }
    }
    else
        return -1;
}
int main()
{
    int array[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int n = 10;
    int x = search(0, 11, array, n);
    if (x != -1)
    {
        cout << "element is present";
    }
    else
    {
        cout << "element is not present";
    }

    return 0;
}
