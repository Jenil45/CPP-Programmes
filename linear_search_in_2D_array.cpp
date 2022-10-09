//Linear search in 2D array
#include<iostream>
using namespace std;

int main()
{
    int n, m, k;
    cin>>n>>m>>k;
    int mat[n][m];

    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>mat[i][j];
        }
        
    }
    
    // r,c beacuse we start from top right corner
    int r=0 ; 
    int c = m-1;
    bool found = false;

    while (r<n and c >= 0)
    {
        if (mat[r][c] == k)
        {
            
            found = true;
        }

        else if (mat[r][c] > k)
        {
            c--;
        }
        else
        {
            r++;
        }
    }

    if (found = true)
    {
        cout<<"element found"<<endl;
    }

    else
    {
        cout<<"elemnet notg found"<<endl;
    }
    
    return 0;   
}
