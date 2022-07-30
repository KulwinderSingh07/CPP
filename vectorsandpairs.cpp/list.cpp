#include <iostream>
using namespace std;
#include <list>
void create(int val, list<int> l1)
{
    l1.push_back(val);
}
void display(list<int> l1)
{
    list<int>::iterator it;
    for (it = l1.begin(); it != l1.end(); it++)
    {
        cout << *it << " ";
    }
}
int main()
{
    list<int> l1;
    int n;
    cin >> n;
    int value;
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        l1.push_back(value);
    }
    display(l1);
    list<int> l2;
    l2.push_back(1);
    // removing elements from list
    //  l1.pop_front();
    //  l1.remove(2);

    // sorting a list
    // l1.sort();

    // merging two list
    // l1.merge(l2);

    // reversing a list
    l1.reverse();
    display(l1);

    return 0;
}