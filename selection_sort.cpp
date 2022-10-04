#include<iostream>
using namespace std;
// We do here selection sorting of an array
// sorting is process that make array in increasing order
// we consider here 2 for loops for making two sorts that compare elements

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"The array before sorting"<<endl;

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";

    }
    
    for (int i = 0; i < n-1; i++)                             // this loop is for 1 sort
    {
        for (int j = i+1 ; j < n; j++)                        // this loop is for 2 sort
        {
            if (arr[i]>arr[j])
            {
                int temp = arr[j];                             // swaping i with j
                 arr[j] = arr[i];
                 arr[i] = temp;
            }
        }
    }
    
    cout<<"The array after selction sorting is "<<endl;

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0;

}
