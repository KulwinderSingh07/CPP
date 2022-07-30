#include<iostream>
using namespace std;
int main()
{
     int rows,colum;
     cin>>rows>>colum;
     for(int i=0;i<rows;i++)
     {
         for(int j=0;j<colum-i;j++)
         {
             cout<<"*";
         }
         cout<<endl;
     }

    return 0;
}