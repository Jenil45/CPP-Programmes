#include<iostream>
using namespace std;

//searching in 2-D array

int main()
{
    int n , m;
    cin>>n>>m;
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int  j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    
    int x;
    cin>>x;

    bool flag = false;

    for (int i = 0; i < n; i++)
    {
        for (int  j = 0; j < m; j++)
        {
            if (arr[i][j] == x)
            {
                cout<<i<<" "<<j<<endl;
                flag  = true;
            }
            
        }
        
    }

   if (flag == true)
   {
       cout<<"element is found";
   }

   else
   {
       cout<<"Element is not found";
   }
   
   return 0;
}
