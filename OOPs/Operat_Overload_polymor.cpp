#include <iostream>
using namespace std;
class complex
{
private:
    int real, imag;

public:
    complex(int r, int i)
    {
        real = r;
        imag = i;
    }
    complex operator+(complex &C)
    {
        complex res(res.real, res.imag);
        res.real = real + C.real;
        res.imag = imag + C.imag;
        return res;
    }
    void display()
    {
        cout << real << "+i" << imag;
    }
};
int main()
{
    complex C1(1, 2), C2(3, 4);
    complex C3 = C1 + C2;
    C3.display();
    return 0;
}