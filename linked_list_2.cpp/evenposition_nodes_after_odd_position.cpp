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
}
void arrangement(node *&head)
{
    node *odd = head;
    node *even = head->next;
    node *starev = even;
    while (odd->next != NULL && even->next != NULL)
    {
        odd->next = even->next;
        odd = even->next;
        even->next = odd->next;
        even = odd->next;
    }
    odd->next = starev;
    if (odd->next != NULL)
    {
        even->next = NULL;
    }
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
    cout << "list before arrangement";
    print_list(head);
    cout << endl;
    arrangement(head);
    cout << "list after arrangement";
    print_list(head);

    return 0;
}