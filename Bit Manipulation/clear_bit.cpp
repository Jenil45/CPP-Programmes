#include<iostream>
using namespace std;
//BITS MANIPULATION
//(3) CLEAR BIT

int clearbit(int n , int position)
{
   return (n ^ (1<<position));
}

int clearbit1(int n , int position)
{
    return (n & (~(1<<position)));
}

int main()
{
    cout<<clearbit(4 , 2)<<endl;                         //way1
    cout<<clearbit1(5 , 0)<<endl;                        //way2

    return 0;
}
