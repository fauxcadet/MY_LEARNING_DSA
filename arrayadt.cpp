/*
#include<iostream>
#include<stdlib.h>
using namespace std;
struct Array {
    int *A;
    int size;
    int length;
};
void display(struct Array arr){
    int i;
    cout<<"elements are"<<endl;
    for(i=0;i<arr.length;i++)
        cout<<arr.A[i];



}

int main(){
    struct Array arr;
    int n,i;

    cout<<"enter size of array"<<endl;
    cin>>arr.size;
    arr.A=(int *)malloc(arr.size*sizeof(int));
    arr.length=0;

    cout<<"enter number of numbers"<<endl;
    cin>>n;

    cout<<"enter all elements"<<endl;
    for(i=0;i<n;i++)
        cin>>arr.A[i];
    arr.length=n;
    display(arr);


    return 0;
}
*/
// inserting , deleting  in array and  linear search
// binary search
// get set max min sum avg()

#include <iostream>
#include <stdlib.h>
using namespace std;
struct Array
{
    int A[10];
    int size;
    int length;
};
void display(struct Array arr)
{
    int i;
    cout << "elements are-" << endl;
    for (i = 0; i < arr.length; i++)
        cout << arr.A[i];
}
void Append(struct Array *arr, int x)
{
    if (arr->length < arr->size)
        arr->A[arr->length++] = x;
}
void Insert(struct Array *arr, int index, int x)
{
    int i;
    if (index >= 0 && index <= arr->length)
    {
        for (i = arr->length; i > index; i--)
            arr->A[i] = arr->A[i - 1];
        arr->A[index] = x;
        arr->length++;
    }
}
int Delete(struct Array *arr, int index)
{
    int x = 0;
    int i;

    if (index >= 0 && index < arr->length)
    {
        x = arr->A[index];
        for (i = index; i < arr->length - 1; i++)
            arr->A[i] = arr->A[i + 1];
        arr->length--;
        return x;
    }
    return 0;
}
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int Linearsrch(struct Array *arr, int key)
{
    int i;
    for (i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i])
        {
            swap(&arr->A[i], &arr->A[i - 1]);
            return i;
        }
    }
    return -1;
}
int Binarysearch(struct Array arr, int key)
{

    int l, mid, h;
    l = 0;
    h = arr.length - 1;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == arr.A[mid])
            return mid;
        else if (key < arr.A[mid])
            h = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}
int Rbinsearch(int A[], int l, int h, int key)
{
    int mid;
    if (l <= h)
    {
        mid = (l + h) / 2;
        if (key == A[mid])
            return mid;
        else if (key < A[mid])
            return Rbinsearch(A, l, mid - 1, key);
        else
            return Rbinsearch(A, mid + 1, h, key);
    }

    return -1;
}
int Get(struct Array arr, int index)
{
    if (index >= 0 && index < arr.length)
        return arr.A[index];
    return -1;
}
void set(struct Array *arr, int index, int x)
{
    if (index >= 0 && index << arr->length)
        arr->A[index] = x;
}
int Max(struct Array arr)
{
    int max = arr.A[0];
    int i;
    for (i = 1; i < arr.length; i++)
    {
        if (arr.A[i] > max)
            max = arr.A[i];
    }
    return max;
}
int Min(struct Array arr)
{
    int min = arr.A[0];
    int i;
    for (i = 1; i < arr.length; i++)
    {
        if (arr.A[i] < min)
            min = arr.A[i];
    }
    return min;
}
int Sum(struct Array arr)
{
    int s = 0;
    int i;
    for (i = 0; i < arr.length; i++)
        s += arr.A[i];
    return s;
}
float Avg(struct Array arr)
{
    int s = 0;
    int i;
    for (i = 0; i < arr.length; i++)
        s += arr.A[i];
    return s / arr.length;
}

void Reverse(struct Array *arr)
{
    int *B;
    int i, j;
    B = (int *)malloc(arr->length * sizeof(int));
    for (i = arr->length - 1, j = 0; i >= 0; i--, j++)
        B[j] = arr->A[i];
    for (i = 0; i > arr->length; i++)
        arr->A[i] = B[i];
}
void Insertsort(struct Array *arr, int x)
{
    int i = arr->length - 1;
    if (arr->length == arr->size)
        return;
    while (i >= 0 && arr->A[i] > x)
    {
        arr->A[i + 1] = arr->A[i];
        i--;
    }
    arr->A[i + 1] = x;
    arr->length++;
}
int issorted(struct Array arr)
{
    int i;
    for (i = 0; i < arr.length - 1; i++)
    {
        if (arr.A[i] > arr.A[i + 1])
            return 0;
    }
    return 1;
}
void REarrange(struct Array *arr)
{
    int i, j;
    i = 0;
    j = arr->length - 1;
    while (i < j)
    {
        while (arr->A[i] < 0)
            i++;
        while (arr->A[i] >= 0)
            j--;
        if (i < j)
            swap(&arr->A[i], &arr->A[j]);
    }
}

struct Array *Merge(struct Array *arr1, struct Array *arr2)
{
    int i, j, k;
    i = j = k = 0;
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));
    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
            arr3->A[k++] = arr1->A[i++];
        else
            arr3->A[k++] = arr2->A[j++];
    }
    for (; i < arr1->length; i++)
        arr3->A[k++] = arr1->A[i];
    for (; j < arr1->length; j++)
        arr3->A[k++] = arr1->A[j];
    arr3->length = arr1->length + arr2->length;
    arr3->size = 10;
    return arr3;
}

struct Array *Union(struct Array *arr1, struct Array *arr2)
{
    int i, j, k;
    i = j = k = 0;
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));
    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
            arr3->A[k++] = arr1->A[i++];
        else if (arr2->A[j] < arr1->A[i])
            arr3->A[k++] = arr2->A[j++];
        else
        {
            arr3->A[k++] = arr1->A[i++];
            j++;
        }
    }
    for (; i < arr1->length; i++)
        arr3->A[k++] = arr1->A[i];
    for (; j < arr1->length; j++)
        arr3->A[k++] = arr1->A[j];
    arr3->length = k;
    arr3->size = 10;
    return arr3;
}

int main()
{
    // struct Array arr = {{2, -3, 4, -5, -6}, 10, 5};

    // Insertsort(&arr,1);
    // REarrange(&arr);

    // cout<<issorted(arr)<<endl;
    //  display(arr);
    /*
        struct Array arr1={{2,7 ,10,15,25},10,5};
        struct Array arr2={{3,4,7 ,15,20},10,5};
        struct Array *arr3;
        arr3=Merge(&arr1,&arr2);
        arr3=Intersection(&arr1,&arr2);
        display(*arr3);
    */
    struct Array arr1;
    int *A;
    int ch;
    int x,index;
    cout << "enter size of array" << endl;
    scanf("%d",&arr1.size);
    arr1.A=(int *)malloc(arr1.size * sizeof(int));

    cout << "Menu" << endl;
    cout << "1. Insert " << endl;
    cout << "2. Delete " << endl;
    cout << "3. Search " << endl;
    cout << "4. Sum " << endl;
    cout << "5. Display" << endl;
    cout << "6. Exit " << endl;

    cout << "Enter your choice" << endl;
    cin >> ch;
    switch (ch)
    {
    case 1:cout<<"Enter an Element and Index"<<endl;
                cin>>x,index;
                Insert(&arr1,index,x);
                break;
    case 2:cout<<"Enter Index"<<endl;
                cin>>index;
                x=Delete(&arr1,index);
                break;
    case 3:cout<<"Enter an Element to search"<<endl;
                cin>>x;
                index=Linearsrch(&arr1,x);
                break;
    case 4:cout<<"sum is "<<Sum(arr1)<<endl;
            
                break;
    
   
    case 5:display(arr1);
    }

    return 0;
}
