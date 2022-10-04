#include<iostream>                            // OCTAL TO DECIMAL CONVERSION                    
#include<cmath>
using namespace std;

int octaltodecimal(int n)
{
    int sum=0;
    int x=1;

    while (n>0)
    {
        int y = n%10;
        sum =sum + (x*y);
        x = x*8;
        n = n/10;
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    cout<<octaltodecimal(n);
    return 0;
}
