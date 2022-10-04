#include<iostream>                    // Convert binary to decimal
#include<cmath>
using namespace std;

int binarytodecimal(int n)
{
    int sum=0;
    int x=1;
    while (n>0)
    {
        int y = n%10;
        sum = sum + (x*y);
        x = x*2;
        n = n/10 ;
    }
    return sum;

}
int main()
{
    int n;
    cin>>n;
    cout<<binarytodecimal(n)<<endl;
    return 0;
}
