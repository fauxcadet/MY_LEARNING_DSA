#include<iostream>
using namespace std;

void insert(int H[],int n)// n= index
{
    int i=n,temp;
    temp=H[i];
    while(i>1 && temp>H[i/2]){
        H[i]=H[i/2];
        i=i/2;
    }
    H[i]=temp;


}

int Delete(int A[],int n){
    int i,j,x,temp,value;
    value=A[1];
    x=A[n];
    A[1]=A[n];
    A[n]=value;
    i=1;j=i*2;
    while(j<n-1){
        if(A[j+1]>A[j])
            j=j+1;
        if(A[i]<A[j]){
            temp =A[i];
            A[i]=A[j];
            A[j]=temp;
            i=j;
            j=2*j;
        }    
    }
    return value;


}
int main(){
    int H[]={0,10,20,30,25,5,40,35};
    int i;
    for(i=2;i<=7;i++)
        insert(H,i);
    cout<<Delete(H,7);
    for(i=1;i<=7;i++){
        cout<<H[i];
        cout<<endl;
    }
    
    
    return 0;
}