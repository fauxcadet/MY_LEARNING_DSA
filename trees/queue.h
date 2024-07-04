#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
class node {
    public:
        node *lchild;
        int data;
        node *rchild;

};
class queue{
    private:
        int front;
        int rear;
        int size;
        node **Q;
    public:
        queue(){front =rear =-1;size=10;Q=new node*[size];}   
        queue(int size){front =rear=-1;this->size=size;Q=new 
        node*[this->size] ;} 
        void enqueue(node * x);
        node * dequeue();
        int isempty(){return front =rear;}
        void display();

};
void queue::enqueue(node *x){
    if(rear==(size-1))
        cout<<"queue is full"<<endl;
    else{
        rear++;
        Q[rear]=x;
    }    
}
node * queue::dequeue(){
    node * x=NULL;
    if(front ==rear)
        cout<<"queue is empty"<<endl;
    else{
        x=Q[front+1];
        front++;
    }   
    return x; 

}
void queue::display(){
    for(int i=front+1;i<=rear;i++)
    cout<<Q[i]<<endl;
}