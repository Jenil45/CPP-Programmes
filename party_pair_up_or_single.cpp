#include<iostream>
using namespace std;
//RECURSION
//find number of ways in which n freind can be remain single or can be pair up

int freindpair(int n)
{
    if (n==0 || n==1 || n==2)
    {
        return n;                                      //if n==0 no way , n==1 only one way remain single , n==2 mau be single or pair up two ways
    }


    return (freindpair(n-1) + (freindpair(n-2) * (n-1))); // if one is single than pair up remain n-1 or that person is pair up it can be n-1 way and remainn-2 is pair by recursion
    
}
int main()
{
    int n;
    cin>>n;
    cout<<freindpair(n)<<endl;
    return 0;
}
