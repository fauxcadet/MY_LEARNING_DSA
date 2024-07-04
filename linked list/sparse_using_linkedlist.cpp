#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
struct node{
    int coeff;
    int exp;
    struct node *next ;
} *poly=NULL;
// void create(,struct node *p,int m,int n){
//    struct node *A[m];
//    A[0]=new node;
// }
void create(){
    struct node *t,*last=NULL;
    int num;
    cout<<"enter number of terms"<<endl;
    cin>>num;
    cout<<"enter each term and coefficient"<<endl;
    for(int i=0;i<num;i++){
        t = new node;
        cin>>t->coeff>>t->exp;
        t->next=NULL;
        if(poly==NULL){
            poly=last=t;

        }
        else{
            last->next=t;
            last =t;
        }
    }
}

void display(struct node *p){
    while(p){
        cout<<p->coeff<<"+"<<p->exp<<endl;
        p=p->next;
    }
}
int main(){
    create();
    display(poly);
    
    
    return 0;
}