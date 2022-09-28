#include<iostream>                     // Check the enter number is prime or not
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i;
    for ( i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            cout<< n <<"is not prime"<<endl;
            break;                                          // use to terminate the loop
        }
    }
    if (i==n)
    {
        cout<<n << "is prime"<<endl;
    }
    
    return 0;
}
