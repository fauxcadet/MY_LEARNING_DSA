#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct node{
    struct node *prev;
    struct node *next;
    int data;
}*first =NULL;

void create(int A[],int n){
    struct node *t,*last;
    int i;
    first = new node;
    first->data=A[0];
    first->prev=first->next=NULL;
    last=first;
    for(i=1;i<n;i++){
        t=new node;
        t->data=A[i];
        t->next=last->next;
        t->prev=last;
        last->next=t;
        last=t;
    }
}
void display(struct node *p){
    while(p){
        cout<<p->data;
        p=p->next;
        
        }
        cout<<endl;
}
int length(struct node *p)      
{
    int len=0;
    while(p){
        len++;
        p=p->next;
    }
    return len;
}
void Insert(struct node *p,int index,int x){
    struct node *t;
    int i;
    if(index<0 ||index>length(p))
        return;
    if(index==0){
        t=new node;
        t->data=x;
        t->prev=NULL;
        t->next=first;
        first->prev=t;
        first =t;

    }   
    else{
        for(i=0;i<index-1;i++)
            p=p->next;
        t= new node;
        t->data=x;
        t->prev=p;
        t->next=p->next;
        if(p->next) p->next->prev=t;  
        p->next=t;
           
    } 
}
int Delete(struct node *p, int index){
  //  struct node *q;
    int x=-1,i;
    if(index<1 ||index>length(p))
        return x;
    if(index==1){
        first=first->next;
        if(first)first->prev=NULL;

        x=p->data;
        free(p);
    }  
    else{
        for(i=0;i<index-1;i++)
            p=p->next;
        p->prev->next=p->next;
        if(p->next)
            p->next->prev=p->prev;
        free(p);    

    } 
    return x; 
}
//revrsing a doubly linked list

void Reverse(struct node *p){
    struct node *temp;
    while(p){
        temp =p->next;
        p->next=p->prev;
        p->prev=temp;
        p=p->prev;
        if(p!=NULL && p->next==NULL)
            first=p;
    }

}

// to find middle point of a linked list
//student challenge
int middlepoint(struct node *p){
    
    int midnode = ceil(length(p)/2);
    for(int i=0;i<midnode;i++){
        p=p->next;
    }
    return p->data;

}
//finding intersection of linked list



int main(){
    int A[]={10,20,30,40,50,60};
    create(A,6);
    Reverse(first);
    //cout<<"Length is "<<length(first)<<endl;
   // Insert(first,2,50);
   //Delete(first,3);
    display(first);
cout<<middlepoint(first);
    
    return 0;
}