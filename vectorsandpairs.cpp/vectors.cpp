#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
int main()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;
    vector<int>::iterator j;
    for (j = v1.begin(); j < v1.end(); j++)
    {
        cout << *j << " ";
    }
    cout << endl;
    for (auto element : v1)
    {
        cout << element << " ";
    }
    cout << endl;
    for (auto &pointer : v1)
    {
        cout << &pointer << " ";
    }
    cout << endl;
    v1.pop_back();
    for (auto pointer : v1)
    {
        cout << pointer << " ";
    }
    cout << endl;
    vector<int> v2(4, 0);
    for (auto pointer : v2)
    {
        cout << pointer << " ";
    }
    cout << endl;
    swap(v1, v2);
    cout << "elements of vector v1 are:";
    for (auto pointer : v1)
    {
        cout << pointer << " ";
    }
    cout << endl;
    cout << "elements of vector v2 are:";
    for (auto pointer : v2)
    {
        cout << pointer << " ";
    }
    cout << endl;
    vector<int> v3;
    v3.push_back(5);
    v3.push_back(3);
    v3.push_back(1);
    v3.push_back(2);
    v3.push_back(4);
    for (auto pointer : v3)
    {
        cout << pointer << " ";
    }
    cout << endl;
    sort(v3.begin(), v3.end(), greater<int>());
    for (auto pointer : v3)
    {
        cout << pointer << " ";
    }
    cout << endl;

    return 0;
}