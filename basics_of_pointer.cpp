#include<iostream>
using namespace std;
//Basics of a pointer

int main()
{
    int a = 10;
    int *aptr = &a;                              //declaration of a ppointer

    cout<<aptr<<endl;                            // aptr gives hexadecimal value of adress of 'a' 
    
    cout<<*aptr<<endl;                           //This *aptr gives value of 'a'
    
    *aptr = 20;                                  //We can change value of a without using a variable 'a'
    
    cout<<a<<endl;

    //pointer arithmetic operation 

    aptr++;
    cout<<aptr<<endl;                              //This increase adress by 4 unit(due to integer)
    
}
