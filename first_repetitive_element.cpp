// Find first repeating element in array
#include "bits/stdc++.h"
using namespace std;

/*
***********Logic************

1) We make an idx array which contain -1 
2) we define minidxbas an ans
3)  if (idx[arr[i]] != -1)
        {
            minidx = min(minidx , idx[arr[i]]);
        }
        else
        {
            idx[arr[i]] = i ;
        } 
*/
int main()
{
    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    const int N = 1000 ;
    int idx[N];

    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }
    
    int minidx = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (idx[arr[i]] != -1)
        {
            minidx = min(minidx , idx[arr[i]]);
        }
        else
        {
            idx[arr[i]] = i ;
        }
        
    }
    
    if (minidx == INT_MAX)
    {
        cout<<"-1"<<endl;
    }
    
    else
    {
        cout<<minidx<<endl;
    }
    
    return 0;
}
