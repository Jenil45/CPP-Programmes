#include<iostream>
using namespace std;
//RECURSION
//Find factorial of a number

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }

    int prevfact = fact(n-1);
    
    return n*prevfact;
}
int main()
{
    int n;
    cin>>n;
    cout<<fact(n);
    return 0;
}
