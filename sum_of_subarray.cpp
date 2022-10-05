#include<iostream>
using namespace std;

// Find sum of all subarray ("sum of all subarray is also a array ofn size")

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"\n The array is \n";

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    cout<<"\n";

    int current = 0;

    for (int i = 0; i < n; i++)                            // We use nested loop here
    {
        current = 0;
        for (int j = i; j < n; j++)
        {
            current = current+arr[j];                     // for sum of subarray we consider one current number and add 2 nd loop in it
            cout<<current<<endl;
        }
        
    }   
    return 0;
}
