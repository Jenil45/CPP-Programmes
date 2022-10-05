#include<iostream>
using namespace std;
//RECORD BREAKING DAY (GOOGLE LICKSTART)


int main()
{
    int n;
    cin>>n; 
    int arr[n+1];
    arr[n] = -1;
    int mx = -1;

    for (int i = 0; i < n; i++)
    {
         cin>>arr[i];
    }

    int current = 0;
       
    if(n == 1)
       {
           current=1;
       }

    for (int j = 0; j < n; j++)
    {
       if (arr[j]>mx && arr[j]>arr[j+1])
       {
           current++;
       }

       mx = max(mx , arr[j]);
    }

    cout<<current;
    
    return 0;
}
