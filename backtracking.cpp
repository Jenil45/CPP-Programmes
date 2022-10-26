#include<iostream>
using namespace std;
//BACKTRACKING
//RATE IN MAZE LIKE A GAME

bool issafe(int** arr , int x , int y , int n)                   //function for checking that our moving is safe or not
{
    if (x<n && y<n && arr[x][y] == 1)
    {
        return true;
    }

    return false;
    
}

bool rateinmaze(int** arr , int x , int y , int n , int** solarr)
{
    if (x == n-1 && y == n-1)
    {
        solarr[x][y]=1;
        return true;
    }
    
    if (issafe(arr,x,y,n))
    {
        solarr[x][y] = 1;

        if (rateinmaze(arr,x+1,y,n,solarr))                   //if this forward moving is right 
        {                                                     //recursive call for forward moving
            return true;
        }
        
        if (rateinmaze(arr,x,y+1,n,solarr))                  //if this downward moving is true 
        {                                                    //recursive call for downward moving
            return true;
        }
        
        solarr[x][y] = 0;                                          //backtracking......(because we first recurse a call than it not true so we backtrack our pointer)
        return false;
    }
    
}
int main()
{
    int n;
    cin>>n;

    int** arr = new int*[n];                                 //array by dynamic memory allocation
    
    for (int i = 0; i < n; i++)
    {
        arr[i]=new int[n];                                  //dynamic memory allocation for eqach elemnt of 1D array
    }
  
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j<n ; j++)
        {
            cin>>arr[i][j];
        }
    }
    
    int** solarr = new int*[n];

    for (int i = 0; i < n; i++)
    {
        solarr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            solarr[i][j] = 0;
        }
        
    }

    if (rateinmaze(arr , 0 , 0 , n , solarr))
    {
      for (int i = 0; i < n; i++)
      {
        for(int j = 0 ; j<n ; j++)
         {
             cout<<solarr[i][j]<<" ";
         }
             cout<<endl;
      }
    }
    
    
    return 0;
}
