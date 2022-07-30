#include<iostream>
using namespace std;
int main()
{
     int rows,colum;
     cin>>rows>>colum;
     for(int i=1;i<=rows;i++)
     {
         for(int j=1;j<=colum;j++)
         {
             if((i+j)%4==0 || (i==2 && j%4==0))
             cout<<"*"<<"";
             else
             cout<<"  ";
         }
         cout<<endl;
     }

    return 0;
}