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
        cout << temp->data;
        temp = temp->next;
    }
}
node *reverse(node *&head)
{
    node *first = NULL;
    node *second = head;
    node *third;
    while (second != NULL)
    {
        third = second->next;
        second->next = first;
        first = second;
        second = third;
    }
    return first;
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
    print(head);
    cout << endl;
    node *newhead = reverse(head);
    print(newhead);

    return 0;
}