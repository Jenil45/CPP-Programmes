#include<iostream>             // REVERSE A GIVEN NUMBER n 
#include<cmath>
using namespace std;

int main()                   
{
    int n;
    cin>>n;

    int reverse = 0;

    while (n>0)
    {
        int lastdigit = n%10;
        reverse = reverse*10 + lastdigit;
        n = n/10;                                                 // for making last remaining 0
    }

    cout<<reverse;
    
    return 0;
}
