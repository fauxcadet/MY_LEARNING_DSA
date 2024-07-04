#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;

}*head;

void create(int A[],int n){
    int i;
    struct node *t;
    struct node *last;
    head=(struct node *)malloc(sizeof(struct node));
    head->data=A[0];
    //first->next=NULL;
    head->next=head;//for the cir cular linked list type
    last=head;
    for(i=1;i<n;i++){
        t=(struct node *)malloc(sizeof(struct node));
        t->data=A[i];
        //t->next=NULL;
        t->next=last->next;
        last->next=t;
        last=t;

    }    

}

void circdisplay(struct node *h){
   
    
    do{
        cout<<h->data;
        h=h->next;
    }while(h!=head);
    cout<<endl;

}
int Length(struct node*h){
    int len=0;
    do{
        len++;
        h=h->next;
    }
    while(h!=head);
    return len;
}
void Insert(struct node *h,int index,int x){
    struct node *t;
    int i;
    // if(index<0 || (index>Length))
    //     return ;
    if(index==0){
        t=(struct node *)malloc(sizeof(struct node));
        t->data=x;
        if(head==NULL){
            head =t;
            head->next=head;
        }
        else{
            while(h->next!=head)
            h=h->next;
            t->next=head;
            head=t;

        }
    }
    else{
        for(i=0;i<index-1;i++) h=h->next;
         t=(struct node *)malloc(sizeof(struct node));
         t->data=x;
         t->next=h->next;
         h->next=t;


    }
}

int DELE(struct none *h,int index){
    struct node *q;
    int i,x;
    if(index<0||index>Length(head))
        return -1;
    if(index==1){
        // while((h->next)!=head){
        // x=head->data;
        // if(head==h)    

        }
    }
}

int main(){ 
    int A[]={2,3,4,5,6};
    create (A,5);
    Insert(head,2,10);
    circdisplay(head);
    
    return 0;
}