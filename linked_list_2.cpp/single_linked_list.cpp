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
void list_search(node *&head, int searval)
{
    node *p = head;
    int count = 1;
    while (p != NULL && p->data != searval)
    {
        p = p->next;
        count++;
    }
    cout << p->data << " is present at " << count << "th position in list";
    cout << endl;
}
void list_insert(node *&head, int val, int pos)
{
    node *pre;
    node *temp = head;
    node *q;
    while (pos - 1)
    {
        pre = temp;
        temp = temp->next;
        pos--;
    }
    q = new node(val);
    pre->next = q;
    q->next = temp;
}
void delete_pos(node *&head, int delpos)
{
    node *temp = head;
    node *pre;
    while (delpos - 1)
    {
        pre = temp;
        temp = temp->next;
        delpos--;
    }
    pre->next = temp->next;
    delete (temp);
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
    cout << "Enter the value of element to search for:";
    int searval;
    cin >> searval;
    list_search(head, searval);
    int valinsert, posinsert;
    cout << "Enter value to be inserted in the linked list:";
    cin >> valinsert;
    cout << "Enter the position where value should be inserted in the list:";
    cin >> posinsert;
    list_insert(head, valinsert, posinsert);
    print_list(head);
    int delpos;
    cout << "Enter the position from which list needs to be removed:";
    cin >> delpos;
    delete_pos(head, delpos);
    print_list(head);

    return 0;
}