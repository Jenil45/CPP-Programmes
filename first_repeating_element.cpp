#include "bits/stdc++.h"
using namespace std;
// First repeating element in array by using nested loop
int main()
{
    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int counter = 0;

        for (int j = i+1; i < n; i++)
        {
            if (arr[i] == arr[j])
            {   
                cout<<arr[j]<<"\n";
                counter = 0;
                break;
            }

            else
            {
                counter++;
                continue;
            }        
        } 

       if (counter == 0)
       {
           break;
       }

       else
       {
           continue;
       }
        
 
    }
    return 0;
}
