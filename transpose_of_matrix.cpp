#include<iostream>
using namespace std;
//Print progr5amme of TRANSPOSE of a matrix        (Time complexity = O(n^2))

int main()
{
    int n ;                                                      //because there is a square matrix in question
    cin>>n;
    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for(int j=0 ; j < n ; j++)
        {
            cin>>arr[i][j];
        }
    }
    
    //Logic of Transposing array

    for (int i = 0; i < n; i++)                          
    {
        for(int j=i ; j < n ; j++)                    //Here only some element change so j=i to j<n(only upper triangle swap)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    
    //Print Transpose array

      for (int i = 0; i < n; i++)
    {
        for(int j=0 ; j < n ; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
