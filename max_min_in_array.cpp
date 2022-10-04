#include<iostream>
// we have to find max and min no in array
using namespace std;

int main()
{
    int n;                               // initialize size of an array
    cin>>n;
    int maximum , minimum;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
 
     cout<<"Your array is"<<endl;

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"\n";               
    }

    int maxNo = INT_MIN;                             // suppose any number to maxiumum
    int minNo = INT_MAX;                             // suppose any number to minimum

    for (int i = 0; i < n; i++)
    {
         maximum = max(maxNo , arr[i]);
         minimum = min(minNo , arr[i]);
    
    
    cout<<"\n"<<maximum<<"and"<<minimum<<endl;
    }    
    return 0;
}
