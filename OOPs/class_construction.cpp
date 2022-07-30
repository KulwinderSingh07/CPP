#include <iostream>
using namespace std;
class student
{
public: // by default all attributes of a class are private we cant access then outside the class so we have to make it public so that we can use it in other functions and classes
    string name;
    int age;
    bool gender;
    void print()
    {
        cout << name << " ";
        cout << age << " ";
        cout << gender << " ";
        cout << endl;
    }
};

int main()
{
    student a; // student a or b these are objects of the class student
    student b;
    a.name = "kulwinder";
    a.age = 21;
    a.gender = 1;
    b.name = "laddi";
    b.age = 12;
    b.gender = 1;

    student arr[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i].name;
        cin >> arr[i].age;
        cin >> arr[i].gender;
    }
    for (int i = 0; i < 3; i++)
    {
        arr[i].print();
    }
    return 0;
}