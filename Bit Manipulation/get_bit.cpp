#include<iostream>
using namespace std;
//BITS MANIPULATION
//(1) GET BIT

int getbit(int n , int position)
{
    return ((n & (1<<position)) != 0);
}
int main()
{
    cout<<getbit(8 , 3);
    return 0;
}
