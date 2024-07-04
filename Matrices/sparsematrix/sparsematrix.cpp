/*
#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
struct Element{
    int i;
    int j;
    int x;

};
struct sparse{
    int m;
    int n;
    int num;
    struct Element *ele;
};

void create(struct sparse *s)
{
    int i;
    cout<<"Enter dimensions"<<endl;
    cin>>s->m,s->n;
    cout<<"Number f Non-zero"<<endl;
    cin>>s->num;
   s->ele=(struct Element *)malloc(s->num*sizeof(struct Element));
   cout<<"Enter all non-zero elements";
   for(i=0;i<(s->num);i++){
        cin>>s->ele[i].i,s->ele[i].j,s->ele[i].x;
           }

}
void display(struct sparse s){
    int i,j,k=0;
    for(i=0;i<(s.m);j++){
        for(j=0;j<(s.n);j++){
            if(i==s.ele[k].i && j==s.ele[k].j)
                cout<<s.ele[k].x;
            else cout<<"0";      
        }
        cout<<endl;
    }
}
int main(){
    struct sparse s;
    create(&s);
    display(s);
    
    return 0;
}
*/

//ading of sparse matrix

#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
struct Element{
    int i;
    int j;
    int x;

};
struct sparse{
    int m;
    int n;
    int num;
    struct Element *ele;
};

void create(struct sparse *s)
{
    int i;
    cout<<"Enter dimensions"<<endl;
    cin>>s->m,s->n;
    cout<<"Number f Non-zero"<<endl;
    cin>>s->num;
   s->ele=(struct Element *)malloc(s->num*sizeof(struct Element));
   cout<<"Enter all non-zero elements";
   for(i=0;i<(s->num);i++){
        cin>>s->ele[i].i,s->ele[i].j,s->ele[i].x;
           }

}
void display(struct sparse s){
    int i,j,k=0;
    for(i=0;i<(s.m);j++){
        for(j=0;j<(s.n);j++){
            if(i==s.ele[k].i && j==s.ele[k].j)
                cout<<s.ele[k].x;
            else cout<<"0";      
        }
        cout<<endl;
    }
}

struct sparse * add(struct sparse *s1,struct sparse *s2){
  struct sparse *sum; // tp store sum
  int i=0,j=0,k=0;
    sum=(struct sparse * )malloc(sizeof(struct sparse));
    sum->ele=(struct Element *)malloc((s1->num+s2->num)*sizeof(struct Element));
    while(i<s1->num && j<s2->num){
        if(s1->ele[i].i<s2->ele[j].i){
            sum->ele[k++]=s1->ele[i++];
        }
        else if(s1->ele[i].i>s2->ele[j].i){
            sum->ele[k++]=s2->ele[j++];
        }
        else{
            if(s1->ele[i].j<s2->ele[j].j){
            sum->ele[k++]=s1->ele[i++];
        }
        else if(s1->ele[i].j>s2->ele[j].j){
            sum->ele[k++]=s2->ele[j++];
        }
        else{
            sum->ele[k]=s1->ele[i];
            sum->ele[k++] s1->ele[i++].x+s2->ele[j++].x;

        }
        }
        
    }
    for(;i<s1->num;i++)sum->ele[k++]=s1->ele[i];
    for(;j<s2->num;j++)sum->ele[k++]=s2->ele[i];
    sum->m=s1->m;
    sum->n=s1->n;
    sum->num=k;

    return sum;
}
int main(){
    struct sparse s1,s2,*s3;
    create(&s1);
    create(&s2);
   s3= add(&s1,&s2);
cout<<"First matrix"<<endl;
    display(s1);
cout<<"second matrix"<<endl;
    display(s2);
    cout<<"Sum Matrix"<<endl;
    display(*s3);
    
    return 0;
}