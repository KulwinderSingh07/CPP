#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int value)
    {
        data = value;
        next = NULL;
    }
};
int create(node *&head, int value)
{
    node *p = head, *q;
    if (head == NULL)
    {
        head = new node(value);
    }
    else
    {
        while (p->next != NULL)
        {
            p = p->next;
        }
        q = new node(value);
        p->next = q;
    }
}
int print_list(node *&head)
{
    node *p = head;
    while (p != NULL)
    {
        cout << p->data;
        p = p->next;
    }
    cout << endl;
}
node *reverseK(node *&head, int k)
{
    node *preptr = NULL;
    node *currptr = head;
    node *nexptr;
    int count = 0;
    while (currptr != NULL && count < k)
    {
        nexptr = currptr->next;
        currptr->next = preptr;
        preptr = currptr;
        currptr = nexptr;
        count++;
    }
    if (nexptr != NULL)
        head->next = reverseK(nexptr, k);
    return preptr;
}
int main()
{
    node *head = NULL;
    int n;
    cout << "Enter no of noded to be created for linked list formation:";
    cin >> n;
    int value;
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        create(head, value);
    }
    print_list(head);
    node *newhead = reverseK(head, 2);
    print_list(newhead);

    return 0;
}