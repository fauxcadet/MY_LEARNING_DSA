#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void swap(int *x, int *y)
{
    int temp;
    temp = *x;

    *x = *y;
    *y = temp;
}
void Bubble(int A[], int n)
{
    int i, j;
    int flag = 0;
    for (i = 0; i < n - 1; i++)
    {
        flag = 0;
        for (j = 0; j < n - 1 - i; j++)
        {
            if (A[j] > A[j + 1])
                swap(&A[j], &A[j + 1]);
            flag = 1;
        }
        if (flag == 0)
            break;
    }
}

void Insertion(int A[], int n)
{ // mainly used for linked list

    int i, j, x;
    for (i = 1; i < n; i++)
    {
        j = i - 1;
        x = A[i];
        while (j > -1 && A[j] > x)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = x;
    }
}
// selection sort

void selection(int A[], int n)
{
    int i, j, k;
    for (i = 0; i < n - 1; i++)
    {
        for (j = k = i; j < n; j++)
        {
            if (A[j] < A[k])
                k = j;
        }
        swap(&A[i], &A[k]);
    }
}

//QUICK SORT
//partition
int partition(int A[],int l,int h){
    int pivot=A[l];
    int i=l,j=h;
    do{
        do{j++;}while(A[i]<=pivot);
        do{j--;}while(A[j]>pivot);
        if(i<j)swap(&A[i],&A[j]);
        }while(i<j);
    swap(&A[l],&A[j]);
    return j;

}
//quick sort recursive
void quicksortr(int A[],int l,int h){
    int j;
    if(l<h){
        j=partition(A,l,h);
        quicksortr(A,l,j);
        quicksortr(A,j+1,h);

    }
}
//sorting by merge
void merge(int A[],int l,int mid,int h){
    int i=l,j=mid+1,k=l;
    int B[100];
    while(i<=mid && j<=h){
        if(A[i]<A[j])
            B[k++]=A[i++];
        else
            B[k++]=A[j++];
    }
    for(;i<=mid;i++)
        B[k++]=A[i];
    for(;j<=h;j++)
        B[k++]=A[j];
    for(int i=l;i<=h;i++){
        A[i]=B[i];
    }        
}
void Imergesort(int A[],int n){
    int p,l,mid,h,i;
    for(p=2;p<=n;p=p*2){
        for(i=0;i+p-1<=n;i=i+p){
            l=i;
            h=i+p-1;
            mid=(l+h)/2;
            merge(A,l,mid,h);
        }
    }
    if(p/2<n)
        merge(A,0,(p/2)-1,n-1);

}
void mergesort(int A[],int l,int h){
    if(l<h){
       int  mid=(l+h)/2;
       mergesort(A,l,mid);
       mergesort(A,mid+1,h);
       merge(A,l,mid,h);



    }
}
int findmax(int A[],int n){
    int max=INT32_MIN;
    for(int i=0;i<n;i++){
        if(A[i]>max)
            max=A[i];
        



    }
return max;
}
//sorting by count
void countsort(int A[],int n){
    int max;
    int *c;
    max = findmax(A,n);
    c=new int[max+1];
    for(int i=0;i<max+1;i++){
        c[i]=0;
        for(i=0;i<n;i++){
            c[A[i]]++;

        }
        int k=0;int j=0;
        while(j<max+1){
            if(c[j]>0){
                A[k++]=j;
                c[j]--;
            }
            else
                j++;
        }
    }
}
void shellsort(int A[],int n){
    int gap,i,j;
    for(gap=n/2;gap>1;gap/=2){
        for(i=gap;i<n;i++){
           int  temp=A[i];
           j=i=gap;
           while(j>0 && A[j]>temp){
                A[j+gap]=A[j];
                j=j-gap;
           } 
           A[j+gap]=temp;

        }

    }
}





int main()
{
    int A[] = {18, 13, 7, 12, 16, 9, 24, 5, 10, 3}, n = 10;
    // Bubble(A,n);
    // Insertion(A,n);
   // selection(A, n);
   //quicksortr(A,0,n-1);
  // mergesort(A,0,9);
   //Imergesort(A,n);
   //countsort(A,n);
   shellsort(A,n);
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << endl;
    }

    return 0;
}