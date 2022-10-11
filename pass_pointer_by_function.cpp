#include<iostream>
using namespace std;
//pass pointer by the function

void swap(int *a , int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    //

    // int a=2;
    // int b=4;

    // swap(a,b);
    // cout<<a<<" "<<b<<endl;                          //No swap due to callby value

    //
    
    int a=2;
    int b=4;
   
    int *aptr = &a;
    int *bptr = &b;

    swap(aptr,bptr);                                 // passing an adres of two variable
    cout<<a<<" "<<b<<endl;                           //swap due to call by adress
     
    return 0;
}
