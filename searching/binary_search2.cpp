#include <iostream>
using namespace std;
int binary_search(int beg, int end, int *a, int num)
{
    if (beg <= end)
    {
        int mid = (beg + end) / 2;
        if (*(a + mid) == num)
        {
            return (mid + 1);
        }
        if (*(a + mid) < num)
        {
            return binary_search(mid + 1, end, a, num);
        }
        if (*(a + mid) > num)
        {
            return binary_search(beg, mid - 1, a, num);
        }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int array[n];
    int num;
    cin >> num;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int x = binary_search(0, n - 1, array, num);
    if (x != -1)
        cout << "element is present";
    else
        cout << "element is not present";
    return 0;
}