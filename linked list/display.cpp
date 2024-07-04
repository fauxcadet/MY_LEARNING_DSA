#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;

}*first=NULL,*second=NULL,*third=NULL,*head;

void create(int A[],int n){
    int i;
    struct node *t;
    struct node *last;
    first=(struct node *)malloc(sizeof(struct node));
    first->data=A[0];
    //first->next=NULL;
    first->next=first;//for the cir cular linked list type
    last=first;
    for(i=1;i<n;i++){
        t=(struct node *)malloc(sizeof(struct node));
        t->data=A[i];
        //t->next=NULL;
        t->next=last->next;
        last->next=t;
        last=t;

    }    

}


void create2(int A[],int n){
    int i;
    struct node *t;
    struct node *last;
    second=(struct node *)malloc(sizeof(struct node));
    second->data=A[0];
    second->next=NULL;
    last=second;
    for(i=1;i<n;i++){
        t=(struct node *)malloc(sizeof(struct node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;

    }    

}


void display(struct node *p){
    while (p!=NULL){
        cout<<p->data;
        p=p->next;
    }
}
//recursive funtion for display
void Rdisplay(struct node *p){
    if(p!=NULL){
        cout<<p->data;
        Rdisplay(p->next);
    }
}
int count(struct node *p){
    int c=0;
    while(p!=0){
        c++;
        p=p->next;
    }
    return c;
}
int Rcount(struct node *p){  // count by recursive
    if(p!=NULL){
        return Rcount(p->next)+1;
    }
    else return 0;
}
int add(struct node *p){
    int sum=0;
    while(p){
        sum=sum+p->data;
        p=p->next;
    }
    return (sum);
}

int Radd(struct node *p){  // add by recursive
    if(p!=NULL){
        return Rcount(p->next)+p->data;
    }
    else return 0;
}
//to find max term in linked list
int max(struct node *p){
    int max=INT32_MIN;
    while(p){
        if(p->data>max){
            max=p->data;

        }
        p=p->next;   
    }
    return max;
}
//recursive version for finding max term
int Rmax(struct node *p){
    int x=0;
    if(p==0){
        return INT32_MIN;

    }
    x=Rmax(p->next);
    if(x>p->data)
        return x;
    else return p->data;    
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

// Recursive version of linear serach
struct node * Rsearch(struct node *p,int key){
    if(p==NULL)
        return NULL;
    if(key==p->data)
        return p;  
    return  Rsearch(p->next,key);      
}

//inserting new element in linked list
void insert(struct node *p,int index,int x){
    struct node *t;
    int i;
    if(index<0 || index>count(p))
        return;
    t=(struct node *)malloc(sizeof(struct node));
    t->data=x;
    if(index==0){
        t->next =first;
        first =t;

    }
    else{
        for(i=0;i<index-1;i++){
            p=p->next;
            t->next =p->next;
            p->next=t;

        }

    }
}
void insertlast(int x){
    struct node *t=new node;
   
    t->data=x;
    t->next=NULL;
    if(first==NULL){
        first=t;
    }
    // else{
    //     last->next=t;
    //     last=t;

    // }

}
void sortedinsert(struct node *p, int x ){
    struct node *t,*q=NULL;
    t=(struct node *)malloc(sizeof(struct node));
    t->data=x;
    t->next=NULL;
    if(first == NULL)
        first=t;
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
int dele(struct node *p,int index){
   struct node *q=NULL;
   int x=-1,i;
   if(index<1||index>count(p))
        return -1;
   if(index==1){
    q=first;
    x=first->data;
    first=first->next;
    delete q;
    return x;

   }  
   else{
    for(i=0;i<index-1;i++){
        q=p;
        p=p->next;
    }
    q->next=p->next;
    x=p->data;
    delete p;
    return x;
   }

}
// to check if list is sorted or not
int ckcksort(struct node *p){
    int x=-65536;
    while(p){
        if(p->data<x)
            return 0;
    x=p->data;
    p=p->next;
    }
    return 1;

}
// to remove duplicates from sorted linked list
void rmvdplct(struct node *p){
    struct node *q=p->next;
    while (q){
        if(p->data!=q->data){
            p=q;
            q=q->next;

        }
        else{
            p->next=q->next;
            free (q);
            q=p->next;;
                    }
    }
}

//reversing a linked list
void reverse1(struct node *p){
    int *A,i=0;
    struct node *q;
    A=(int *)malloc(sizeof(int)*count(p));
    while(q!=NULL){
        A[i]=q->data;
        q=q->next;
        i++;

    }
    q=p;
    i--;
    while(q!=NULL){
        q->data=A[i];
        i--;
    }
}
//rev2 memthod
void reverse2(struct node *p){
    struct node *q=NULL,*r=NULL;
    while(p!=NULL){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    first  =q;

}

//rev in recursive function

void reverse3(struct node *q,struct node *p){
    if(p){
        reverse3(p , p->next);
        p->next = q;
    }
    else first=q;

}

// to concantinate a linked list
void concat(struct node *p,struct node *q){
    third=p;
    while(p->next !=NULL){
        p=p->next;

    }
    p->next=q;

}

// to merging the two sort linked list
void Merge(struct node *p,struct node *q){
    struct node *last;
    if(p->data<q->data){
        third =last=p;
        p=p->next;
        third->next=NULL;
    }
    else{
        third=last=q;
        q=q->next;
        third->next=NULL;
    }
    while(p&&q){
        if(p->data<q->data){
            last->next=p;
            last =p;
            p=p->next;
            last->next=NULL;
        }
        else{
            last->next=q;
            last =q;
            q=q->next;
            last->next=NULL;

        }

    }
    if(p)last->next=p;
    if(q)last->next=q;

}

//is linked list is loop or linear
int isloop(struct node *f){
    struct node *p,*q;
    p=q=first;
    do{
        p=p->next;
        q=q->next;
        q=q?q->next:q;
    }
    while(p&&q&&p!=q);
    if(p==q)
        return 1;
    else 
        return 0;    
}

//displaty circular ll
void circdisplay(struct node *p){
   
    
    do{
        cout<<p->data;
        p=p->next;
    }while(p!=head);
    cout<<endl;

    
}
//recurcive cicrdisplay
// void Rcircdisplay(struct node *p)
// {
//     static int flag =0;
//     if(p!=head || flag=0){
//         flag =1;
//         cout<<p->data;
//     }
//     flag=0;
// }






int main(){
    struct node *t1,*t2;
    int A[]={10 ,20,30,40,50};
   // int B[]={5 ,15,25,35};
    create(A,5);
    circdisplay(head);
    //t1=first->next->next;
    //t2=first->next->next->next->next;
    //t2->next=t1;
    //cout<<isloop(first);
    //create2(B,4);
   // Merge(first,second);
  //  //reverse2(first);
    //reverse3(NULL,first);
   // dele(first,3);
  //  sortedinsert(first,35);
   // insert(first,0,10);
   // insertlast(2);
  //rmvdplct(first);  
//cout<<ckcksort(first)<<endl; 
  // Rdisplay(first);
    //cout<<count(first)<<endl;
    //cout<<add(first)<<endl;
    //cout<<Rmax(first);
    //concat(first,second);
  //  display(third);
//  t=Lsearch(first,10);
//  t=Lsearch(first,12);
// //t=Lsearch(first,12);
// if(t)
//     cout<<"key is found"<<endl;
// else      
//     cout<<"key not found"<<endl;
// cout<<"first"<<endl;
//     display(first);  
//     cout<<endl; 
// cout<<"second"<<endl;
//     display(second);   
    return 0;
}