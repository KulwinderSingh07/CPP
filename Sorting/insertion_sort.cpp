#include<iostream>
using namespace std;
int main()
{
    int t;
     int array[5]={2,4,3,1,5};
     for(int i=1;i<5;i++)
     {
         for(int j=0;j<i;j++)
     {
        if(array[i]<array[j])
        {
            t=array[i];
            array[i]=array[j];
            array[j]=t;
            continue;
        }
     }
     }
     for(int i=0;i<5;i++)

     {
         cout<<array[i];
     }
    return 0;
}