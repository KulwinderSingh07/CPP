#include<iostream>
using namespace std;
int main()
{
     int n;
     cin>>n;
     int array[n];
     for(int k=0;k<n;k++)
     {
        cin>>array[k];
     }
     int i;
     cin>>i;
     int max;
     max=array[0];
     for(int j=0;j<=i;j++)
     {
         if(max<array[i])
         {
             max=array[i];
         }
     }
     cout<<max;
    return 0;
}