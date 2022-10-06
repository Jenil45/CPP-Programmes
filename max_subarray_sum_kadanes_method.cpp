#include "bits/stdc++.h"
using namespace std;
//Find max sum of subarray by Kadane's algorithm (in this the programme has O(n) time complexity

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int currsum = 0;
    int maxsum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        currsum = currsum + arr[i];

        if (currsum < 0)
        {
            currsum = 0;
        }
     
        maxsum = max(maxsum , currsum);     
    }

    cout<<maxsum<<endl;
    
    return 0;
}
