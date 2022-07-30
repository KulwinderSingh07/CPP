#include <iostream>
using namespace std;
class Base
{
public:
    virtual void print() // virtual is used to make the run timme dynamic binding of print() function call with the Base class
    {
        cout << "you are in class Base print function" << endl;
    }
    virtual void display()
    {
        cout << "you are in class Base display function" << endl;
    }
};
class Derived : public Base
{
public:
    void print()
    {
        cout << "you are in class derived print function" << endl;
    }
    void display()
    {
        cout << "you are in class derived display function" << endl;
    }
};
int main()
{
    Base *basepointer;
    Derived obj;
    basepointer = &obj;
    basepointer->print();
    basepointer->display();

    return 0;
}