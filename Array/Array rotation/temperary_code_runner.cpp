#include<iostream>
using namespace std;
struct node
{
 int data;
 node*next;
};
node*head=NULL;
void insert()
{
    int x;
    node*temp;
    temp=head;
    for(int i=0;i<3;i++)
    {
        cin>>x;
    node* temp=new node();
    head->data=x;
    temp->next=NULL;
    temp=head->next;
    }
}
void print()
{
   node*temp=head;
   cout<<"the list is";
   while(temp!=NULL)
   {
       cout<<temp->data;
       temp=temp->next;
   }

}
int main()
{
    insert();
    
   
}