#include<iostream>
using namespace std;
void left_array_rotation(int array[],int n,int d)
{
    int t;
       for(int i=0;i<d;i++)
       {
           t=array[0];
           for(int i=0;i<n-1;i++)
           {
               array[i]=array[i+1];
           }
           array[n-1]=t;
       }
}
void print(int array[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<array[i];
    }
}
int main()
{
     int n;
     cin>>n;
     int d;
     cin>>d;
     int array[n];
     for(int i=0;i<n;i++)
     {
         cin>>array[i];
     }
     left_array_rotation(array,n,d);
    print(array,n);
    return 0;
}