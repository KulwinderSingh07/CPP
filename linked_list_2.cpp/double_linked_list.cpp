#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int value)
    {
        data = value;
        next = NULL;
        prev = NULL;
    }
};
void create(node *&head, int value)
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
        q->prev = p;
    }
}
void print_list_from_start(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data;
        temp = temp->next;
    }
}
void print_list_from_end(node *&head)
{
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    while (temp != NULL)
    {
        cout << temp->data;
        temp = temp->prev;
    }
}
void insert(node *&head, int value, int pos)
{
    node *temp = head, *q;
    while (pos - 1)
    {
        temp = temp->next;
        pos--;
    }
    q = new node(value);
    q->next = temp;
    q->prev = temp->prev;
    temp->prev->next = q;
    temp->prev = q;
}
void deletion(node *&head, int pos)
{
    node *temp = head;
    while (pos - 1)
    {
        temp = temp->next;
        pos--;
    }
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    delete (temp);
}
int main()
{
    node *head = NULL;
    int n;
    cin >> n;
    int value;
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        create(head, value);
    }
    print_list_from_start(head);
    cout << endl;
    print_list_from_end(head);
    cout << endl;
    int val;
    cin >> val;
    int pos;
    cin >> pos;
    insert(head, val, pos);
    print_list_from_start(head);
    cout << endl;
    int posi;
    cin >> posi;
    deletion(head, posi);
    print_list_from_start(head);
    return 0;
}