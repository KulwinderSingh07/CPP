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
node *append(node *&head, int k, int n)
{
    node *temp = head;
    int iterator = n - k;
    node *pre;
    while (iterator)
    {
        pre = temp;
        temp = temp->next;
        iterator--;
    }
    node *p = temp;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = head;
    head = p;
    pre->next = NULL;
    return head;
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
    int k;
    cin >> k;
    node *newhead = append(head, k, n);
    print_list(newhead);

    return 0;
}