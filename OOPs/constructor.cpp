#include <iostream>
using namespace std;
class student
{
public:
    string name;
    int age;
    bool gender;
    student(string s, int a, bool g) // parametrized constructor is called in this we pass parameters to be assigned just the moment constructor is called
    {
        name = s;
        age = a;
        gender = g;
    }
    student()
    {
        cout << "you have called a deault constructor";
    }
    student(student &a)
    { // Copy constructor is called here it copies all the attributes of one constructor into other
        name = a.name;
        age = a.age;
        gender = a.gender;
    }
    ~student()
    {
        cout << "Destructor is being called" << endl;
    }
};
int main()
{
    student a("kulwinder", 20, 1);
    student b;     // default constructor is called here
    student c = a; // shallow constructor only copies the pointers which pint towards a data in the constructor but dot copy the address towards which the pointers are pointing but deep constructor copies both the pointers and the address towards which pointers are poointing
    cout << endl;
    cout << a.name << " ";
    cout << a.age << " ";
    cout << a.gender << " ";
    cout << endl;
    // cout << b.name << " ";
    // cout << b.age << " ";
    // cout << b.gender << " ";
    // cout << endl;
    cout << c.name << " ";
    cout << c.age << " ";
    cout << c.gender << " ";
    cout << endl;

    return 0;
}