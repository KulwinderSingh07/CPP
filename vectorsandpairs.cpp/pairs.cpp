// #include <iostream>
// using namespace std;
// int main()
// {
//     pair<int, int> p1;
//     p1.first = 3;
//     p1.second = 0;
//     cout << p1.first << p1.second << endl;
//     return 0;
// }
#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
bool mycompare(pair<int, int> p1, pair<int, int> p2)
{
    return (p1.first < p2.first);
}
int main()
{
    int arr[8] = {10, 16, 7, 14, 5, 3, 12, 9};
    vector<pair<int, int>> v;
    for (int i = 0; i < 8; i++)
    {
        v.push_back(make_pair(arr[i], i));
    }
    sort(v.begin(), v.end(), mycompare);

    for (int i = 0; i < 8; i++)
    {
        cout << v[i].first << v[i].second << " ";
    }
    cout << endl;
    for (int i = 0; i < 8; i++)
    {
        arr[v[i].second] = i;
    }
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}