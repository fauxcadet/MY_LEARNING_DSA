#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct node{
    struct node *lchild;
    int data;
    int height;
    struct node *rchild;
}*root=NULL;

int nodeheight(struct node *p){
    int hl,hr;
    hl=p &&p->lchild?p->lchild->height:0;
    hr=p &&p->rchild?p->rchild->height:0;
    return hl>hr?hl+1:hr+1;
}

//function for balance factor
int balancefactor(struct node *p){
    int hl,hr;
    hl=p &&p->lchild?p->lchild->height:0;
    hr=p &&p->rchild?p->rchild->height:0;

    return hl-hr;
}

struct node * llrotation(struct node *p){
    struct node *pl=p->lchild;
    struct node *plr=pl->rchild;
    pl->rchild=p;
    p->lchild=plr;
    p->height=nodeheight(p);
    pl->height=nodeheight(pl);
    if(root==p)
        root=pl;
    return pl;    

}
struct node *lrrotation(struct node *p){
    struct node *pl=p->lchild;
    struct node *plr=pl->rchild;
    pl->rchild=plr->rchild;
    p->lchild=plr->rchild;
    plr->lchild=pl;
    plr->rchild=p;
    pl->height=nodeheight(pl);
    p->height=nodeheight(p);
    plr->height=nodeheight(plr);
    if(root==p)
        root=plr;
    return plr; 
}
struct node *rrrotation(struct node *p){
    struct node *pl=p->lchild;
    struct node *plr=pl->rchild;
    pl->rchild=p;
    p->lchild=plr;
    p->height=nodeheight(p);
    pl->height=nodeheight(pl);
    if(root==p)
        root=pl;
    return pl; 

}
struct node *rlrotation(struct node *p){

    struct node *pl=p->lchild;
    struct node *plr=pl->rchild;
    pl->rchild=p;
    p->lchild=plr;
    p->height=nodeheight(p);
    pl->height=nodeheight(pl);
    if(root==p)
        root=pl;
    return pl; 
}



struct node *Rinsert(struct node *p, int key)
{
    struct node *t = NULL;
    if (p == NULL)
    {
        t = new node;
        t->data = key;
        t->height=1;
        t->lchild = t->rchild = NULL; 
        return t;
    }
    if (key < p->data)
        p->lchild = Rinsert(p->lchild, key);
    else if (key > p->data)
        p->rchild = Rinsert(p->rchild, key);
    p->height= nodeheight(p); //after updation factow let know balance factor
    if(balancefactor(p)==2 && balancefactor(p->lchild)==1)
        return llrotation(p);
    else if(balancefactor(p)==2 && balancefactor(p->lchild)==-1)    
         return lrrotation(p);
     else if(balancefactor(p)==-2 && balancefactor(p->rchild)==-1)    
         return rrrotation(p);
     else if(balancefactor(p)==-2 && balancefactor(p->rchild)==1)    
         return rlrotation(p);
    return p;
}

int main(){
    root=Rinsert(root,50);

    Rinsert(root,10);
    Rinsert(root,20);

    return 0;
}