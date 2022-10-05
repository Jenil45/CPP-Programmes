#include<iostream>
#include<cmath>

using namespace std;

// The number of SUBARRAY and SUBSEQUENCE

int fact(int n)                                              // function of find factorial
{
    int current = 1;
    for (int i = 1; i <= n; i++)
    {
        current = current*i;
    }
    
    return current;
}

int subarr(int n)                                          
{
    int sub = (fact(n)/(fact(n-2)*fact(2))) + n ;                // there are subarray of one element or continuous element between two numbers
    return sub;
}

int subseq(int n)
{
    int seq = pow(2 , n);                                    // there is subsequence of each elemnt which is continuous or not
    return seq;
}

int main()
{
    int n;
    cin>>n;

    int arr[n];

    cout<<"The number of sub array is\n"<<subarr(n);                 //sub array made by 2 point and each element which is continuous part of an array
    cout<<"\n";
    cout<<"The number of subsequence is\n"<<subseq(n);               // subsequence made byany element in an array which is not continuous

    return 0;
}
