#include <iostream>
using namespace std;
class A
{
public:
    int a;
    int b;
};
class B : public A
{ //: public A here class A attributes has been inhereted into class B and they have been made public attributes in B
public:
    int c;
    int d;
};
class C : private B
{ //: private B here class B attributes has been inhereted into class C and they have been made private attributes in C
public:
    int e;
    int f;
};
int main()
{
    A Node1;
    B Node2;
    C Node3;
    Node2.a = 1;
    Node2.b = 2;
    Node2.c = 3;
    Node2.d = 4;
    // In Node3 we cant access the attributess a,b,c,d because its been made into private part of Class C while a,b,c,d can be accessed by Node2
    Node3.e = 5;
    Node3.f = 6;

    return 0;
}