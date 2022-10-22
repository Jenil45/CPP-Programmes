#include<iostream>
using namespace std;
//RECURSION
//(1) SUM TILL n

int sum(int n)
{
    if (n == 0)
    {
        return 0;                                         // value return 0  to sum(n-1)
    }
    
    int prevsum = sum(n-1);                              //function call itself 
    return n + prevsum ;
}
int main()
{
    int n;
    cin>>n;
    cout<<sum(n)<<endl;
    return 0;
}
