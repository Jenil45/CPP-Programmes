#include<iostream>
using namespace std;
//BITS MANIPULATION
//(4)UPDATE BIT

int updatebit(int n , int position , int value)
{
    int mask = ~(1<<position);
    n = n & mask;

    return (n | (value<<position));
}
int main()
{
    cout<<updatebit(5 , 2  , 4)<<endl;
    return 0;
}
