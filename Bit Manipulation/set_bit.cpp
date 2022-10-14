#include<iostream>
using namespace std;
//BITS MANIPULATION
//(2) SET BIT

int setbit(int n , int position)
{
    return (n | (1<<position));
}
int main()
{
    cout<<setbit(4 , 3)<<endl;
    return 0;
}
