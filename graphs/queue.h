#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct node{
    int data;
    struct node *next;
}*front =NULL,*rear=NULL;


void enqueue(int x){
    struct node *t;
    t=new node;
    if(t==NULL)
        cout<<"queue is full";
    else{
        t->data=x;
        t->next=NULL;
        if(front==NULL)
            front=rear=t;
        else{
            rear->next=t;
            rear=t;
        }    
    }    
}
int dequeue(){
    int x=-1;
    struct node *t;
    t=new node;
    if(front ==NULL){
        cout<<"queue is empty";
    }
    else{
        x=front->data;
        t=front;
        front=front->next;
        free(t);

    }
    return x;
}
int isEmpty(){
    return front==NULL;
}