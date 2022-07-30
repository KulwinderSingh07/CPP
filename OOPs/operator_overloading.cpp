#include <iostream>
using namespace std;
class node
{
public:
    int a;
    int b;
    node(int a, int b)
    {
        a = a;
        b = b;
    }
    node(node &c)
    {
        a = c.a;
        b = c.b;
    }
    bool operator==(node &c) // operator overloading is being used here because we are making == operator work in a particular way so that it suits outr interest
    {
        if (a == c.a && b == c.b)
            return true;
        else
            return false;
    }
};
int main()
{
    node c(5, 6);
    node b = c;
    if (c == b)
        cout << "both a and c are same";
    else
        cout << "both a and c are different";
    return 0;
}