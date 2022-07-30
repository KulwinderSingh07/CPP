#include <iostream> //Floyad's algoritham
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
void makinglistcircular(node *&head, int pos)
{
    node *temp = head;
    int count = 1;
    node *p;
    while (temp->next != NULL)
    {
        if (count == pos)
            p = temp;
        temp = temp->next;
        count++;
    }
    temp->next = p;
}
bool pres_of_cycle(node *&head) // detecting the presence of a cycle using floyad's method
{
    node *slow = head;
    node *fast = head;
    while (fast != NULL || fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            return true;
        }
    }
    return false;
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
void removing_cycle_from_list(node *&head)
{
    node *slow = head;
    node *fast = head;
    do
    {
        slow = slow->next;
        fast = fast->next->next;
    } while (slow != fast);
    fast = head;
    while (fast->next != slow->next)
    {
        fast = fast->next;
        slow = slow->next;
    }
    slow->next = NULL;
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
    int pos;
    cin >> pos;
    makinglistcircular(head, pos);
    removing_cycle_from_list(head); // function to remove cycle from linked list by floyad's algoritham
    print_list(head);
    // if (pres_of_cycle(head))
    //     cout << "Linked list contains a cycle";
    // else
    //     cout << "Linked list doesn't contain a cycle";
    cout << pres_of_cycle(head) << endl;
    return 0;
}