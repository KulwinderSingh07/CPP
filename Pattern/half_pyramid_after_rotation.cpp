#include<iostream>
using namespace std;
int main()
{
     int rows,colums;
     cin>>rows>>colums;
     for(int i=1;i<=rows;i++)
     {
         for(int j=1;j<=colums;j++)
         {
            if(j<=colums-i)
            {
                cout<<" ";
            }
            else
            cout<<"*";
         }
         cout<<endl;
     }

    return 0;
}