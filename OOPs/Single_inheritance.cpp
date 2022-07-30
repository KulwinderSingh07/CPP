//****<<<<<Single Inheritance>>>>>***
#include <iostream>
using namespace std;
class A
{
public:
    void Afunc()
    {
        cout << "inheret";
    }
};
class B : public A
{
public:
    void Bfunc()
    {
        cout << "we can call both Afunc() as well as Bfunc()";
    }
};
int main()
{
    B node;
    node.Afunc();
    cout << endl;
    node.Bfunc();
    return 0;
}
