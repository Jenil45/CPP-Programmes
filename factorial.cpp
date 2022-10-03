#include<iostream>               // Find factorial of number n
#include<cmath>
using namespace std;

void factorial(int n)
{
    int fac=1;
    for (int i = 2; i <= n; i++)
    {
        fac = fac*i;
    }
    cout<<fac;

}


int main()
{
    int n;
    cout<<"Enter the number that you want a factorial:";
    cin>>n;

    factorial(n);
    return 0;
}
