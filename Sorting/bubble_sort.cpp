#include<iostream>//Bubble Sorting Algoritham
using namespace std;
int bubble_sort(int *a)
{
    int temp;
   for(int i=0;i<4;i++)
   {
       for(int j=i+1;j<5;j++)
       {
           if(*(a+i)>*(a+j))
           {
                temp=*(a+i);
                *(a+i)=*(a+j);
                *(a+j)=temp;
           }
       }
   }   
}
int print(int *a)
{
    for(int i=0;i<5;i++)
    {
        cout<<*(a+i);
    }
}
int main()
{
     int array[5]={5,4,3,2,1};
     bubble_sort(array);
    print(array);
    return 0;
}