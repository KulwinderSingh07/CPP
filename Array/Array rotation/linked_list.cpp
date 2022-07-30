// #include<iostream>
// using namespace std;
// struct node{
//     int data;
//     node* next;
// };

// void insert(node* head)
// {
//       int x;
//      for(int i=0;i<2;i++)
//     {
//         cin>>x;
//     head=new node();
//      head->data=x;
//     head=head->next;
//     head=NULL;
//     }
// }
// void print(node* head)
// {
//     while(head!=NULL)
//     {
//         cout<<head->data;
//         head=head->next;
//     }
// }
// int main()
// {
  
//     node* head=NULL;
//    insert(head);
//      print(head);

//     return 0;
// }
#include<iostream>
using namespace std;

class node{

	public:
	int data;
	node* next;

	node(int data){
		this->data = data;
		next = NULL;
	}
};

void ll(node *head){
	while(head!=NULL)
	{
		cout<<head->data;
		head=head->next;
	}
}
void l2(node* head,int n)
{int count=0;
	while(head->next!=NULL)
	{
		count++;
          if(count==n-1)
		  {
			  node* todelete  = head->next;
			  head->next=head->next->next;
			delete todelete;
		  }
		  head=head->next;
	}
}
node* l3(node* &head)
{
   node* prev = NULL;
   node* current = head;
   node* Next ;
	while(current!=NULL)
	{
		Next = current->next;
		// Next->next = current;
		current->next  = prev; 
		prev = current;
		current = Next;
	}
	// head = current; z
	return prev;
}
void l4(node *head)
{
      
}
int main()
{
	 node* head = new node(5);
	 head->next = new node(2);
	 head->next->next = new node(4);
	 head->next->next->next = new node(5);
	 head->next->next->next->next = new node(6);
       int n=3;
	    // l2(head,n);
		head = l3(head);
	 ll(head);
	 l4(head);
      

	return 0;
}