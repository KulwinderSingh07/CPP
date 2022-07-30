#include <iostream>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
    node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};
int search(node *root, int point)
{
    node *temp = root;
    while (temp != NULL || temp->data != point)
    {
        if (temp->data < point)
            temp = temp->left;
        else
            temp = temp->right;
    }
    return temp->data;
}
int main()
{
    node *root = new node(4);
    root->left = new node(3);
    root->right = new node(6);
    root->left->right = new node(2);
    root->left->left = new node(1);
    root->right->left = new node(5);
    int point;
    cin >> point;
    int z;
    z = search(root, point);
    if (z == point)
        cout << "element is present";
    else
        cout << "its not present";
    return 0;
}