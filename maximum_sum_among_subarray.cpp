#include "bits/stdc++.h"
using namespace std;
// Find maximum sum among all subarrays

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    
    int sub=0;
    int current=INT_MIN;
    for(int i=0 ; i<n ; i++)
    {   
        sub = 0;
        for (int j = i; j < n; j++)
        {
            sub = sub + arr[j];
            current = max(sub , current);          
        }
        
    }
    cout<<current<<endl;
    return 0;
}    
