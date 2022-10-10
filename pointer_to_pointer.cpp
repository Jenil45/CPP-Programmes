#include<iostream>
using namespace std;
//Pointer to pointer represnt

int main()
{
    int a = 10;
    int *p = &a;
    cout<<*p<<endl;                          //10

    int **q = &p;                            // ** represent pointers to pointers
    cout<<*q<<endl;                          // derefrence on *p (gave 2000 acording to our example)
    cout<<**q<<endl;                         // gave 10

}
