#include <iostream>
using namespace std;

class vector
{
public:
    int *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new int[size];
    }
    int productvec(vector &v)
    {
        int d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};
int main()
{
    vector v1(3);
    v1.arr[0] = 4;
    v1.arr[1] = 3;
    v1.arr[1] = 3;
    v1.arr[1] = 3;

    return 0;
}