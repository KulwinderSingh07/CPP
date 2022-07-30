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
        cout << p->data << "->";
        p = p->next;
    }
    cout << "NULL";
    cout << endl;
}
node *merge(node *&head1, node *&head2)
{
    node *temp1 = head1;
    node *temp2 = head2;
    node *dummyone = new node(-1);
    node *temp3 = dummyone;
    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->data < temp2->data)
        {
            temp3->next = temp1;
            temp1 = temp1->next;
            temp3 = temp3->next;
        }
        else
        {
            temp3->next = temp2;
            temp2 = temp2->next;
            temp3 = temp3->next;
        }
    }
    while (temp1 != NULL)
    {
        temp3->next = temp1;
        temp1 = temp1->next;
        temp3 = temp3->next;
    }
    while (temp2 != NULL)
    {
        temp3->next = temp2;
        temp2 = temp2->next;
        temp3 = temp3->next;
    }
    node *head3 = dummyone->next;
    delete (dummyone);
    return head3;
}
node *mergerecursive(node *&head1, node *&head2)
{
    if (head1 == NULL)
    {
        return head2;
    }
    if (head2 == NULL)
    {
        return head1;
    }
    node *temp;
    if (head1->data < head2->data)
    {
        temp = head1;
        temp->next = mergerecursive(head1->next, head2);
    }
    else
    {
        temp = head2;
        temp->next = mergerecursive(head1, head2->next);
    }
    return temp;
}
int main()
{
    node *head1 = NULL;
    node *head2 = NULL;
    int n;
    cout << "Enter no of noded to be created for linked list formation:";
    cin >> n;
    int value;
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        create(head1, value);
    }
    print_list(head1);
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        create(head2, value);
    }
    print_list(head2);
    // node *newhead = merge(head1, head2);
    node *newhead = mergerecursive(head1, head2);
    print_list(newhead);

    return 0;
}