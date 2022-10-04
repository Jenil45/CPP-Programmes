#include<iostream>
using namespace std;
// We find searching in array by BINARY SEARCH
// In this method we find mid term first

int binarysearch(int arr[] , int n , int key)
{
    int s=0;              // give starting point of an array
    int e=n-1;              // give ending pointof an array

    while (s<n)
    {
        int mid = (s+e)/2;                    // find mid point

        if (arr[mid] == key)                    // we have to find key is right or wrong from here
        {
             return mid;            
        }
        
        else if (arr[mid] > key)              // here mid term is greter than key so ending point is now decrease
        {
            e = (mid-1);
        }
        
        else
        {
            s = (mid+1);                      // mid term is less than key so starting point is increase
        }
        
    }
    return -1;
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
    
    int key;
    cin>>key;

    cout<<binarysearch(arr , n , key)<<endl;
    return 0;
}
