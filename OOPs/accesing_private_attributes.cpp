#include <iostream>
using namespace std;
class student
{
    string name;

public:
    int age;
    void getname(string s)
    {
        name = s;
    }
    void print()
    {
        cout << name << " ";
    }
};
int main()
{
    student a;
    string s = "kulwinder";
    a.getname(s);
    a.age = 20;
    a.print();
    cout << a.age;

    return 0;
}