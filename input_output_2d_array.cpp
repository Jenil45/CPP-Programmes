#include<iostream>
using namespace std;
//Input and Output 2-D array

int main()
{
    int n , m;                                           // 2-D array is also called matrix
    cin>>n>>m;
    int arr[n][m];                                        // Declaration of an 2-D array

    for (int i = 0; i < n; i++)                           //taking input of an 2-D array
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
        
    }

    for (int i = 0; i < n; i++)                         // printing output of an 2-D array
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;   
}
