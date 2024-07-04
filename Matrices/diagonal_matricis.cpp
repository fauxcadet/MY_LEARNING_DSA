// #include <iostream>
// using namespace std;
// // struct Matrix{
// //     int A[10];
// //     int n;

// // };
// // void Set(struct Matrix *m, int i,int j,int x){
// //     if(i==j){
// //         m->A[i-1]=x;

// //     }
// // }
// // int get(struct Matrix m,int i ,int j){
// //     if(i==j){
// //         return m.A[i-1];
// //     }
// //     else   return 0;
// // }
// // void Display(struct Matrix m){
// // int i,j;
// // for(i=0;i<m.n;i++){
// //     for(j=0;j<m.n;j++){
// //         if(i==j)
// //             cout<<m.A[i-1];
// //         else cout<<"0";

// //     }
// //     cout<<endl;
// // }
// // }
// // diagonal matrices

















// #include <iostream>
// using namespace std;
// class LowerTri
// {
// private:
//     int n;
//     int *A;

// public:
//     LowerTri(int n)
//     {
//         this->n = n;
//         A = new int[n*(n+1)/2];
//     }
//     void set(int i, int j, int x);
//     int get(int i, int j);
//     void Display();
//     int GetDimension(){return n;}
//     ~LowerTri()

//     {
//         delete[] A;
//     };
// };
// void LowerTri::set(int i, int j, int x)
// {
//     if (i >= j)
//         A[i*(i - 1)/2+j-1] = x;
// }
// int LowerTri::get(int i, int j)
// {
//     if (i >= j)
//         return A[i*(i - 1)/2+j-1];
//     else
//         return 0;
// }
// void LowerTri::Display()
// {
//     int i, j;
//     for (i = 1; i <=n; i++)
//     {
//         for (j = 1; j <=n; j++)
//         {
//             if (i >= j)
//                 cout<<A[i*(i - 1)/2+j-1];
//             else
//                 cout << "0";
//         }
//         cout<<endl;
//     }
// }

// int main()
// {

//     int d;
//     cout<<"enter dimenesions"<<endl;
//     cin>>d;
//     LowerTri lm(d);

// int x;
// cout<<"enter all the elements";
// for(int i=1;i<=d;i++){
//     for(int j =1;j<=d;j++){
//         cin>>x;
//         lm.set(i,j,x);
//     }
// }
// lm.Display();

//     return 0;
// }
//



//tri diagonal matrix
// main diagonal i-j=0, i-j=1,  i-j = -1  

//toeplitx matrix 
void create(int A[],int n){


}
int get(int A[],int i, int j){

}
void set(int A[],int i,int j ,int x)
{

}
void display(int A[],int n){

}

#include<iostream>
using namespace std;

int main(){
    int *A,n,ch,x;
    cout<<"Enter Dimension";
    cin>>n;
    A = new int[n];
    
    return 0;
}
