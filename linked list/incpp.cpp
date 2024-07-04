#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
class linkedlist
{
private:
    node *first;

public:
    linkedlist() { first = NULL; }
    linkedlist(int A[], int n);
    ~linkedlist();
    void display();
    void INsert(int index, int x);
    int Delete(int index);
    int Length();
};
linkedlist::linkedlist(int A[], int n)
{
    int i;
    struct node *t;
    struct node *last;
    first = (struct node *)malloc(sizeof(struct node));
    first->data = A[0];
    first->next = NULL;
    last = first;
    for (i = 1; i < n; i++)
    {
        t = (struct node *)malloc(sizeof(struct node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
linkedlist::~linkedlist()
{
    node *p = first;
    while (first)
    {
        first = first->next;
        delete p;
        p = first;
    }
}
void linkedlist::display()
{
    node *p = first;
    while (p != NULL)
    {
        cout << p->data;
        p = p->next;
    }
}
int linkedlist::Length()
{
    node *p = first;
    int c = 0;
    while (p != 0)
    {
        c++;
        p = p->next;
    }
    return c;
}
void linkedlist::INsert(int index, int x)
{
    node *t, *p = first;
    if (index < 0 || index > Length())
        return;
    t = (struct node *)malloc(sizeof(struct node));
    t->data = x;
    if (index == 0)
    {
        t->next = first;
        first = t;
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
        {
            p = p->next;
            t->next = p->next;
            p->next = t;
        }
    }
}
int linkedlist::Delete(int index)
{
    node *p, *q = NULL;
    int x = -1;
    if (index < 1 || index > Length())
        return -1;
    if (index == 1)
    {
        p = first;
        first = first->next;
        x = p->data;
        delete p;
    }
    else
    {
        p = first;
        for (int i = 0; i < index - 1; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        x = p->data;
        delete p;
    }
}

int main()
{
    int A[] = {1, 2, 3, 4};
    linkedlist(A, 5);
    

    // cout<<Delete(3);

    return 0;
}