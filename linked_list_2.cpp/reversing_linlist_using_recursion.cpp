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
void create(node *&head, int value)
{
    if (head == NULL)
    {
        head = new node(value);
    }
    else
    {
        node *p = head, *q;
        while (p->next != NULL)
        {
            p = p->next;
        }
        q = new node(value);
        p->next = q;
    }
}
void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
}
node *reverse(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *Newhead = reverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return Newhead;
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
    cout << "linked list before reversal:";
    print(head);
    cout << endl;
    node *newhead = reverse(head);
    cout << "linked list after reversal:";
    print(newhead);
    return 0;
}