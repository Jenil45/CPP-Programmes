#include<iostream>
using namespace std;
//Find  LONGEST ARITHMETIC LENGTH (GOOGLE KICKSTART QUESTION)
//Arithmetic length means subarray of an element which has equal comman differnce

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
    
    int ans =2;                                             //It is minimum length of an Arithmetic Subarray
    int prevdiff = arr[1]-arr[0];                           //We compare our iteration with this previous common differnce
    int current = 2;                                        // This is current ans with this common differnce

    for (int j = 2; j < n; j++)
    {
        if (prevdiff == arr[j]-arr[j-1])                    
        {
            current++;                                      
        }

        else
        {
            prevdiff = arr[j]-arr[j-1];
            current = 2;
        }
        
        ans = max(ans,current);
        
    }
 cout<<"\n The maximum subarray length is = "<<ans;   
 return 0;
}
