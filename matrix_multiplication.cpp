#include<iostream>
using namespace std;
//Write programme on matrix multiplication


int main()
{
    int n1 , n2 , n3;                                   // 3 variables of matrix row and column
    cin>>n1>>n2>>n3;

    int m1[n1][n2];                                    //matrix1
    int m2[n2][n3];                                    //matrix2
    int ans[n1][n3];                                   //answer matrix

    for (int i = 0; i < n1; i++)
    {
        for(int j=0 ; j<n2 ; j++)
           {                             
               cin>>m1[i][j];                         //Enter matrix1
           }
    }
    
     for (int i = 0; i < n2; i++)
    {
        for(int j=0 ; j<n3 ; j++)
           {
               cin>>m2[i][j];                        // Enter matrix23
           }
    }

     for (int i = 0; i < n1; i++)
    {
        for(int j=0 ; j<n3 ; j++)
           {
               ans[i][j] = 0;                       //denote answer matrix as 0 first
           }
    }

     for (int i = 0; i < n1; i++)
    {
      for(int j=0 ; j<n3 ; j++)
      {
       for (int k = 0; k < n2; k++)
       {
        ans[i][j] = ans[i][j] + ( m1[i][k]*m2[k][j] );                  //Matrix multiplication logic
       }

      }

    }  

     for (int i = 0; i < n1; i++)
    {
        for(int j=0 ; j<n3 ; j++)
           {
               cout<< ans[i][j]<<" ";
           }
        cout<<"\n";   
    } 
    return 0;
}    
