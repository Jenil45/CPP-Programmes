#include<iostream>
#include<climits>
using namespace std;
//Find maximum subarray by Cumulative sum method

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int currsum[n+1];
    currsum[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        currsum[i] = currsum[i-1] + arr[i-1];              // Cumulative sum
    }
    
    int maxsum = INT_MIN;

    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        for (int j = 0; j <= i; j++)
        {
            sum = currsum[i] - currsum[j];               // cumulativsum to ending - cumulativsum to starting point
            maxsum = max(maxsum , sum);
        }
        
    }
    
    cout<<maxsum<<endl;
    return 0;
}
