#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct stack{
    int size;
    int top;
    int *s;
};
void create (struct stack *st){
    cout<<"enter size";
    cin>>st->size;
    st->top=-1;
  st->s=new int[st->size];
 // st->s=(int *)malloc(st->size*sizeof(int));
  }
  void Display(struct stack st){
    int i;
    for(i=st.top;i>=0;i--){
        cout<<st.s[i]<<endl;

    }
  }
  void push(struct stack *st,int x){
    if(st->top==st->size-1){
        cout<<"stack overflow";
    }
    else{
        st->top++;
        st->s[st->top]=x;

    }
  }

int pop(struct stack *st ){
    int x=-1;
    if(st->top==-1){
        cout<<"stack underflow";
    }
    else{
        x=st->s[st->top--];
    }
    return x;
}
int Peek(struct stack st,int index){
    int x=-1;
    if(st.top-index+1<0)
        cout<<"invalid index";
    x=st.s[st.top-index+1];

    return x;
}
int isEmpty(struct stack st){
    if(st.top==-1)
        return 1;
    return 0;    
}
int isFull(struct stack st){
    if(st.top==st.size-1)
        return 1;
    return 0;    
}
int stackTop(struct stack st){
    if(!isEmpty(st))
        return st.s[st.top];
    return -1;

}


int main(){
    struct stack st;
    create(&st);
     push(&st,10);
     push(&st,20);
     push(&st,30);
     push(&st,40);
     cout<<Peek(st,1);
    // cout<<pop(&st)<<endl;
    cout<<endl;
    Display(st);
    
    return 0;
}