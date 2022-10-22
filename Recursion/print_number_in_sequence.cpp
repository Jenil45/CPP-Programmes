#include<iostream>
using namespace std;
//RECURSION
//Print number in sequence (1) increasing 1 to n  (2) Decreasing n to 1

void increase(int n)
{
    if (n==1)
    {
        cout<<"1 ";
        return;
    }

    increase(n-1);                                //first  print remaining number than  print cuurent number
    cout<<n<<" "; 
}

void decrease(int n)
{ 
    if (n==1)
    {
        cout<<"1 ";
        return;
    }

    cout<<n<<" ";                               // first print current number then print remainiing number
    decrease(n-1);
       
}
int main()
{
    int n;
    cin>>n;
    increase(n);
    cout<<endl;
    decrease(n);
    return 0;
}
