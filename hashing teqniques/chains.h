#include<iostream>

using namespace std;
struct node
{
    int data;
    struct node *next;

}*first=NULL,*second=NULL,*third=NULL,*head;

void sortedinsert(struct node **H, int x ){
    struct node *t,*q=NULL,*p=*H;
    t=(struct node *)malloc(sizeof(struct node));
    t->data=x;
    t->next=NULL;
    if(*H == NULL)
        *H=t;
    else{
        while(p && p->data<x){
            q=p;
            p=p->next;
        }
        if(p==first){
            t->next=first;
            first =t;

        }
        else{
            t->next=q->next;
            q->next=t;
        }
    }    



}

// for leanear search
struct node * Lsearch(struct node *p,int key){
    struct node *q;
    while(p){
        if(key==p->data){
            q->next =p->next;
            p->next=first;
            first =p;
            return p;

        }
        q=p;

        p=p->next;    
    }
    return NULL;

}

