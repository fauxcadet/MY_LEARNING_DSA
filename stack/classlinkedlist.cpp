#include<iostream>
using namespace std;
class node{
    public:
        int data;
        node *next;
};
class stack{
    private:
        node *top;
    public:
    stack(){top=NULL;}
    void push(int x);
    int pop();
    void display();
};
void stack::push(int x){
    node *t = new node;
    if(t==NULL)
        cout<<"stack is full";
    else{
        t->data=x;
        t->next=top;
        top=t;
    }
}
int stack::pop(){
    int x=-1;
    node *t=new node;
    if(top==NULL)
        cout<<"stack is empty";
    else{
        t=top;
        top=top->next;
        x=t->data;
    }    
    return x;
}
void stack::display(){
    node *p=top;
    
    while(p){
    cout<<p->data<<" ";
    p=p->next;
    }
}
// int isbalance(char *exp){
//     class stack stk;

// }
int main(){
    stack stk;
    stk.push(10);
    stk.push(11);
    stk.push(12);
    stk.display();
    cout<<stk.pop();
    return 0;
}