#include<iostream>
using namespace std;
//RECURSION
//Checking array is sorted or not

bool checksorting(int arr[] , int n)
{
    if (n == 1)
    {
        return true;
    }

    bool restarray = checksorting(arr + 1 , n-1);
    
    return ( arr[1]>arr[0] && restarray);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
         cin>>arr[i];
    }
    
    cout<<checksorting(arr , n);
    return 0;
}
