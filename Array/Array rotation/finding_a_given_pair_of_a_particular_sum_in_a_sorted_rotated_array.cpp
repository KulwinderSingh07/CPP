#include<iostream>
using namespace std;
bool search(int array[],int n,int key)
{
    int l,h,i;
    for(i=0;i<6;i++)
    {
        if(array[i]>array[i+1])
        break;
    }
    l=i+1;
    h=i;
    while(l!=h){
    if(array[l]+array[h]==key)
    return true;
    if(array[l]+array[h]>key)
    h=(n+h-1)%n;
    if(array[l]+array[h]<key)
    l=(l+1)%n;
}
return false;
}
int main()
{
     int array[6]={11, 15, 6, 8, 9, 10};
     int key=16;
     if(search(array,6,key))
     cout<<"1";
     else
     cout<<"0";

    return 0;
}