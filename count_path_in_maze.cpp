#include<iostream>
using namespace std;
//RECURSION
//Here we have to count path in which a person can reach at right top end point from given(i,j)

int countpathinmaze(int n , int i ,int j)
{
    if (i == n-1 && j == n-1)
    {
          return 1;                                      //We can give this condition as 1 way
    }
    
    if (i >= n || j >= n)
    {
        return 0;                                        //if line cross give 0
    }
    
    return (countpathinmaze(n , i+1 , j) + countpathinmaze(n , i , j+1));           //both i and j move
}
int main()
{
    cout<<countpathinmaze(10,2,2);
    return 0;
}
