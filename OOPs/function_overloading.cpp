#include <iostream>
using namespace std;
class Node
{
public:
    void func()
    {
        cout << "same function with no argument" << endl;
    }
    void func(int x)
    {
        cout << "same function with int as an argument" << endl;
    }
    void func(double x)
    {
        cout << "same function with double as an argument" << endl;
    }
};
int main()
{
    Node obj;
    obj.func();
    obj.func(2);
    obj.func(4.34);

    return 0;
}