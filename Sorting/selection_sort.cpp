#include<iostream>//Selection Sort
using namespace std;
int main()
{
    int t;
     int array[5]={5,4,3,2,1};
     for(int i=0;i<4;i++)
     {
         for(int j=i+1;j<5;j++)
         {
             if(array[i]>array[j])
            {
             t=array[i];
             array[i]=array[j];
             array[j]=t;
            }
         }
     }
     for(int i=0;i<5;i++)
     {
         cout<<array[i];
     }

    return 0;
}