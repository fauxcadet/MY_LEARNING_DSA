#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct node
{
    struct node *lchild;
    int data;
    struct node *rchild;
} *root = NULL;
void insert(int key)
{
    struct node *t = root;
    struct node *r, *p;
    if (root == NULL)
    {
        p = new node;
        p->data = key;
        p->lchild = p->rchild = NULL;
        root = p;
        return;
    }
    while (t != NULL)
    {
        r = t;
        if (key < t->data)
            t = t->lchild;
        else if (key > t->data)
            t = t->rchild;
        else
            return;
    }
    p = new node;
    p->data = key;
    p->lchild = p->rchild = NULL;

    if (key < r->data)
        r->lchild = p;
    else
        r->rchild = p;
}
void inorder(struct node *p)
{
    if (p)
    {
        inorder(p->lchild);
        cout << p->data;
        inorder(p->rchild);
    }
}
struct node *Search(int key)
{
    struct node *t = root;
    while (t != NULL)
    {
        if (key == t->data)
            return t;
        else if (key < t->data)
            t = t->lchild;
        else
            t = t->rchild;
    }
    return NULL;
}
int height(struct node *p)
{
    if (p == NULL)
        return 0;
    int x = height(p->lchild);
    int y = height(p->rchild);
    return x > y ? x + 1 : y + 1;
}
struct node *inpre(struct node *p)
{
    while (p && p->rchild != NULL)
        p = p->rchild;
    return p;
}
struct node *insucc(struct node *p)
{
    while (p && p->lchild != NULL)
        p = p->lchild;
    return p;
}

struct node *Rinsert(struct node *p, int key)
{
    struct node *t = NULL;
    if (p == NULL)
    {
        t = new node;
        t->data = key;
        t->lchild = t->rchild = NULL; 
        return t;
    }
    if (key < p->data)
        p->lchild = Rinsert(p->lchild, key);
    else if (key > p->data)
        p->rchild = Rinsert(p->rchild, key);
    return p;
}

struct node *Delete(struct node *p, int key)
{
    struct node *q;
    if (p == NULL)
        return NULL;
    if (p->lchild == NULL && p->rchild == NULL)
    {
        if (p == root)
            root = NULL;
        free(p);
        return NULL;
    }
    if (key < p->data)
        p->lchild = Delete(p->lchild, key);
    else if (key > p->data)
        p->rchild = Delete(p->rchild, key);
    else
    {
        if (height(p->lchild) > height(p->rchild))
        {
            q = inpre(p->lchild);
            p->data = q->data;
            p->lchild = Delete(p->lchild, q->data);
        }
        else
        {
            q = insucc(p->rchild);
            p->data = q->data;
            p->lchild = Delete(p->lchild, q->data);
        }
    }
    return p;
}



int main()
{
    struct node *temp;
    root = Rinsert(root, 10);
    Rinsert(root, 5);
    Rinsert(root, 20);
    Rinsert(root, 8);
    Rinsert(root, 30);

    Delete(root, 10);
    inorder(root);
    cout << endl;

    temp = Search(20);
    if (temp != NULL)
        cout << "element is founnd";
    cout << temp->data;

    return 0;
}