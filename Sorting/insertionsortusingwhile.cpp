#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int key;
    int j;
     int array[n];
     for(int i=0;i<n;i++)
     {
         cin>>array[i];
     }
     for(int i=1;i<n;i++)
     {
        key=array[i];
        j=i-1;
        while(j>=0 && array[j]>key)
        {
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=key;
     }
     for(int i=0;i<n;i++)
     {
         cout<<array[i];
     }

    return 0;
}