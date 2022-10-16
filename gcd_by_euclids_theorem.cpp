#include<iostream>
using namespace std;
//Find gcd by euclid algortithm

int gcd(int a , int b)
{
    /*If we take two number 24 and 42
    then 42%24 = 18
         24%18 = 6
         18%6  = 0
     ....6 is gcd
    */  
    while(b != 0)
    {   
       int c = a%b;
        a = b;
        b = c;
           
    }
    return a;
}

int main()
{
    int a , b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    return 0;
}
