// finding length of string
/*
#include<iostream>
using namespace std;

int main(){
    char S[]="welcome";
    int i;
    for(i=0;S[i]!='\0';i++)
    {

    }
    cout<<i;
    return 0;
}
*/
// changing case of string
/*
#include<iostream>
using namespace std;

int main(){
    char A[]="welcome";
    int i;
    for(i=0;A[i]!='\0';i++){
        A[i]=A[i]-32;
    }
    cout<<A;
    return 0;
}
*/

// toggle the character
/*
#include<iostream>
using namespace std;

int main(){
    char A[]="WElcoME";
    int i;
    for(i=0;A[i]!='\0';i++){
        if(A[i]>65 && A[i]<90)
            A[i]+=32;
        else if(A[i]>='a' && A[i]<=122)
            A[i]-=32;
    }
    cout<<A;




    return 0;
}
*/
// counting vowels and consonents
/*
#include<iostream>
using namespace std;

int main(){
    char A[]="how are you";
    int i, vcount=0,ccount=0;
    for(i=0;A[i]!='\0';i++)
    {
        if(A[i]=='a'or A[i]=='e'or A[i]=='i'or A[i]=='o'or A[i]=='u'
        ::A[i]=='A' or A[i]=='E'or A[i]=='I'or A[i]=='O'or A[i]=='U')
        {
            vcount++;
        }
        else if(A[i]>=65 && A[i]<=90)(A[i]>=97 &&A[i]<=122)
    }

    return 0;
}
*/
// validating a string
/*
int valid(char *name){
    int i;
    for(i=0;name[i]!='\0';i++)
    {
        if(!(name[i]>=65 && name[i]<=90) &&
        !(name[i]>=97) && name[i]<=122 &&
        !(name[i]>=48 && name[i]<=57))
        return 0;

    }
    return 1;
}
#include<iostream>
using namespace std;

int main(){
    char *name="Ani##231";
    if(valid(name))
    {
        cout<<"valid";
    }
    else{
        cout<<"invalid";
    }

    return 0;
}
*/

// recvversing a string
/*
#include<iostream>
using namespace std;

int main(){
    char A[]="python";
    char t;
    int i,j;
    for(j=0;A[j]!='\0';j++){
    }
    j=j-1;
    for(i=0;i<j;i++,j--){
        t=A[i];
        A[i]=A[j];
        A[j]=t;

    }
    printf("%s",A);


    return 0;
}
*/

// comparing strings and paldromes
/*
#include<iostream>
using namespace std;

int main(){
    char A[]= "painter";
    char B[]= "painting";
    int i,j;
    for(i=0,j=0;A[i]!='\0'&&B[j]!='\0';i++,j++)
    {
        if(A[i]!=B[j]);
            break;
    }
    if(A[i]=B[j]) {
       cout<<"equal";}
    else if (A[i]<B[j])
        cout<<"smaller";
    else
        cout<<"greater";





    return 0;
}
*/
// find duplicates in string
/*
#include<iostream>
using namespace std;

int main(){
   char A[]="finding";
   int H[26]={0}
   ;
   int i;

   for(i=0;A[i]!='\0';i++){
       H[A[i]-97]+=1;
   }
   for(i=0;i<26;i++){
       if(H[i]>1)
           cout<<i+97<<endl;
          cout<<H[i];
   }
   return 0;
}
 */
// using bitwise
/*
#include<iostream>
using namespace std;

int main(){
    char A[]="finding";
    long int H=0,x=0;
    int i;
    for( i=0;A[i]!='\0';i++){
        x=1;
        x=x<<(A[i]-97);
        if((x&H)>0){
           cout<<A[i]<<" is Duplicate "<<endl;

     }
     else
       H=x|H;
    }
   return 0;
}
*/
// check for anagrams
/*
#include<iostream>
using namespace std;

int main(){
    char A[]="decimal";
    char B[]="medical";
    int i,H[26];
    for(i=0;A[i]!='\0';i++){
         H[A[i]-97]+=1;
    }
    for(i=0;B[i]!='\0';i++){
       H[B[i]-97]-=1;
    }
    if(H[A[i]-97]<0){
     cout<<"Not Anagram";

    }
    else if(B[i]=='\0'){
                cout<<"its Anagram";
        }

    return 0;
}
*/
// permuttations of string
#include <iostream>
using namespace std;
void PNC(char S[], int k)
{
    static int A[10] = {0};
    static char res[10];
    int i;
    if (S[k] == '\0')
    {
        res[k] = '\0';
        cout << res << endl;
    }
    for (i = 0; S[i] != '\0'; i++)
    {
        if (A[i] == 0)
        {
            res[k] = S[i];
            A[i] = 1;
            PNC(S, k + 1);
            A[i] = 0;
        }
    }
}

int main()
{
    char S[] = "ABC";
    PNC(S, 0);

    return 0;
}