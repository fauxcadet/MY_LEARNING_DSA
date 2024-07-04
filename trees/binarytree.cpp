#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
#include <iostream>
using namespace std;
class tree
{
public:
    node *root;
    tree() { root = NULL; }
    void createtree();
    void preorder(node *p);
    void postorder(node *p);
    void inorder(node *p);
    void levelorder(node *p);
    int height(node *root);
};

void tree::createtree()
{
    node *p, *t;
    int x;
    queue q(100);
    cout << "enter root value" << endl;
    cin >> x;
    root = new node;
    root->data = x;
    root->lchild = root->rchild = NULL;
    q.enqueue(root);
    while (!q.isempty())
    {
        p = q.dequeue();
        cout << "enter the left child of ", p->data;
        cin >> x;
        if (x != -1)
        {
            t = new node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            q.enqueue(t);
        }
        else
        {
            cout << "enter the right child of ", p->data;
            cin >> x;
            if (x != -1)
            {
                t = new node;
                t->data = x;
                t->lchild = t->rchild = NULL;
                p->rchild = t;
                q.enqueue(t);
            }
        }
    }
}
void tree::preorder(node *p)
{
    if (p)
    {
        cout << p->data << endl;
        preorder(p->lchild);
        preorder(p->rchild);
    }
}
void tree::postorder(node *p)
{
    if (p)
    {
        postorder(p->lchild);
        postorder(p->rchild);
        cout << p->data << endl;
    }
}
void tree::inorder(node *p)
{
    if (p)
    {
        inorder(p->lchild);
        cout << p->data << endl;
        inorder(p->rchild);
    }
}

int tree::height(node *root)
{
    int x = 0, y = 0;
    if (root == 0)
        return 0;
    x = height(root->lchild);
    y = height(root->rchild);
    if (x > y)
        return x + 1;
    else
        return y + 1;
}
void tree::levelorder(node *root)
{
    queue q(100);
    cout << root->data;
    q.enqueue(root);
    while (!q.isempty())
    {
        root = q.dequeue();
        if (root->lchild)
        {
            cout << root->lchild->data;
            q.enqueue(root->lchild);
        }
        if (root->rchild)
        {
            cout << root->rchild->data;
            q.enqueue(root->rchild);
        }
    }
}

int main()
{
    tree t;
    t.createtree();
    t.preorder(t.root);

    return 0;
}