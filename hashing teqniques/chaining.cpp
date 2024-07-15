#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include"chains.h"
using namespace std;
int hash(int key){
    return key%10;
}
void Insert(struct node *H[],int key)
{
    int index= key%10;
    sortedinsert(&H[index],key);

    
}

int main(){
    struct node *HT[10];
    int i;
    for(i=0;i<10;i++)
        HT[i]=NULL;
    Insert(HT,12);    
    Insert(HT,22);    
    Insert(HT,42);    
    
    return 0;
}