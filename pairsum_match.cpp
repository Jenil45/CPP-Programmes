#include "bits/stdc++.h"
using namespace std;
//Match which pairsum is match with k  

bool pairsum(int arr[] , int n, int k)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]+arr[j] == k)
            {      
                cout<<arr[i]<<" "<<arr[j]<<endl;
                return true;  
            }
            
        }
        
    }
    return false;
}
int main()
{
    int n , k;
    cin>>n>>k;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<pairsum(arr , n , k);
    return 0;

}
