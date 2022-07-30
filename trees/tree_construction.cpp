#include<iostream>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
    node(int value){
        data=value;
        left=NULL;
        right=NULL;}
};
// void construct(node* &root,int value)
// {
//      node* temp;
//     if(root==NULL)
//     {
//         root=new node(value);
//     }
//     else
//     {

//     }
// }
int print(node* root){
    if(root==NULL)
    return 0;
    else{
    cout<<root->data;
    print(root->left);
    print(root->right);
    }
}
int main()
{
    //  node* root=NULL;
    //  int value;
    //  for(int i=0;i<7;i++){
    //      cin>>value;
    //  construct(root,value);
    //  }
    node* root = new node(1);
    root->left = new node(3);
    root->right = new node(2);
    root->left->right = new node(6);
    root->left->left = new node(9);
    root->right->left = new node(10);
    print(root);
    return 0;
}