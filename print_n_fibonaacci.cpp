#include<iostream>             // print 'n' terms of fibonaaci  sequenceusing function
#include<cmath>
using namespace std;

void fib(int n)
{
    int t1=0;
    int t2=1;
    int nextterm;

    for (int i = 1; i <= n; i++)
    {  
        cout<<t1<<endl;
        nextterm = t1+t2;
        t1=t2;                                     // menas now t1 become t2 for further
        t2=nextterm;                               // means now t2 becomes answer of above nextterm
    }
    
} 


int main()
{
    int n;
    cout<<"Enter the number which you want term of fibonaacci:";
    cin>>n;

    fib(n);    
    return 0;
}
