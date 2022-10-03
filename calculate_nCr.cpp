#include<iostream>                       // calculate nCr ,...........nCr = n!/((n-r)!*r!)
#include<cmath>
using namespace std;

int fact(int n)
{
       int factorial=1;
       for (int i = 2; i <= n; i++)
       {
           factorial = factorial*i;
       }
    return factorial;    
}
int main()
{
    int n,r;
    cout<<"Enter the value of n :";
    cin>>n;
    cout<<"Enter the value of r:";
    cin>>r;
    int ans;
    if (r>n)
    {
        cout<<"............ERORR...........";
        
    }
    else
    {
        ans = fact(n)/(fact(n-r)*fact(r));
        cout<<"The answer of nCr is:"<<ans;
    }
    
    
    return 0;
}
