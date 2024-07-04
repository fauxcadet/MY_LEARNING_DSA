#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
struct queue{
    int size;
    int front;
    int rear;
    int *Q;
};

void create(struct queue *q,int size){
    q->size=size;
    //q->front =q->rear=-1;
    q->front =q->rear=0;
    q->Q= new int[q->size];
    

}
void enqueue(struct queue *q,int x){
 
 //if(q->rear==q->size-1)
 if((q->rear+1)%q->size==q->front)
   std::cout<<"queue is full";
  else{
    //q->rear++;
    q->rear=(q->rear+1)%q->size;;
   q-> Q[q->rear]=x;
  }     
}

int dequeue(struct queue *q){
    int x=-1;
    if(q->front == q->rear)
        std::cout<<"queue is empty"<<std::endl;
    else{
        //q->front++;
        q->front=(q->front+1)%q->size;
        x=q->Q[q->front];
    }    
    return x;
}
void display(struct queue q){
    // for(int i=q.front+1;i<=q.rear;i++){
    //     std::cout<<q.Q[i];
    // }
    int i=q.front+1;
    do{
        std::cout<<q.Q[i];
        i=(i+1)%q.size;

    }while(i!=(q.rear+1)%q.size);
    cout<<endl;
}

int main(){
    struct queue q;
    create(&q,5);
    enqueue(&q,10);
    enqueue(&q,15);
    enqueue(&q,20);
    enqueue(&q,25);
    enqueue(&q,30);
   // std::cout<<dequeue(&q);
  display(q);
    return 0;
}