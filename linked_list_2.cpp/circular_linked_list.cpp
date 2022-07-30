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
    }
};
void create(node *&head, int value)
{
    if (head == NULL)
    {
        head = new node(value);
        head->next = head;
    }
    else
    {
        node *temp = head, *q;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        q = new node(value);
        q->next = head;
        temp->next = q;
    }
}
void print(node *&head)
{
    node *temp = head;
    while (temp->next != head)
    {
        cout << temp->data;
        temp = temp->next;
    }
    cout << temp->data;
}
void search_list(node *&head, int val)
{
    node *temp = head;
    int count = 1;
    while (temp->next != head && temp->data != val)
    {
        temp = temp->next;
        count++;
    }
    cout << val << " is found at " << count << " position";
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
    int serval;
    cin >> serval;
    search_list(head, serval);
    return 0;
}