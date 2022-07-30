#include <iostream>
using namespace std;
int mergelist(int a[], int l, int m, int h)
{
    int p = l;
    int b = m;
    int c = 0;
    int d = m - 1;
    int t[h + 1];
    while (p <= d && b <= h)
    {
        if (a[p] <= a[b])
        {
            t[c] = a[p];
            p++;
            c++;
        }
        else
        {
            t[c] = a[b];
            b++;
            c++;
        }
    }
    while (p <= m - 1)
    {
        t[c] = a[p];
        c++;
        p++;
    }
    while (b <= h)
    {
        t[c] = a[b];
        c++;
        b++;
    }
    for (int k = l; k <= h; k++)
    {
        a[k] = t[k - l];
    }
    for (int z = l; z <= h; z++)
    {
        cout << a[z] << " ";
    }
    cout << endl;
}
// int mergelist(int a[], int l, int m, int h)
// {
//     int arr1[m - 1];
//     int arr2[h - m + 1];
//     for (int i = l; i <= m - 1; i++)
//     {
//         arr1[i] = a[i];
//     }
//     for (int i = m; i <= h; i++)
//     {
//         arr2[i] = a[i];
//     }
//     int p = 0;
//     int q = 0;
//     int r = 0;
//     while (p <= m - 1 && q <= h - m + 1)
//     {
//         if (arr1[p] <= arr2[q])
//         {
//             a[r] = arr1[p];
//             p++;
//             r++;
//         }
//         if (arr1[p] > arr2[q])
//         {
//             a[r] = arr2[q];
//             q++;
//             r++;
//         }
//     }
//     while (p <= m - 1)
//     {
//         a[r] = arr1[p];
//         p++;
//         r++;
//     }
//     while (q <= h - m + 1)
//     {
//         a[r] = arr2[q];
//         q++;
//         r++;
//     }
// }
int merge(int a[], int l, int h)
{
    if (l < h)
    {
        int mid = (l + h) / 2;
        merge(a, l, mid);
        merge(a, mid + 1, h);
        mergelist(a, l, mid + 1, h);
    }
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
    merge(array, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}