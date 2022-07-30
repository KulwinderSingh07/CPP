#include <iostream>
using namespace std;
#include <deque>
int main()
{
    deque<int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_front(3);
    dq.push_front(4);
    for (auto i : dq)
    {
        cout << i;
    }
    cout << endl;
    dq.pop_back();
    dq.pop_front();
    for (auto i : dq)
    {
        cout << i;
    }
    cout << endl;
    cout << dq.size();
    cout << endl;
    cout << dq.max_size();

    return 0;
}