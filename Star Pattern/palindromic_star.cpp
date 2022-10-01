// ADVANCE PATTERN QUESTION 5
/*
5) PALINDROMIC PATTERN  for n=5

        1                              ROWS : 1 to n 
      2 1 2                     COLUMNS : 1) SPACE : n-i
    3 2 1 2 3                             2) int k = i , k-- : n-i to n   (for part 1 from 1 )
  4 3 2 1 2 3 4                           3) int k=2 , k++ : n to n+i-1   (for part 2 from 2)
5 4 3 2 1 2 3 4 5

*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        int j;
        for (j = 1; j <= n-i; j++)
        {
            cout<<" ";
        }
            int k = i;

        for (; j <= n; j++)
        {
            cout<<k--;
        }
             k=2;
        
         for (; j <= n+i-1; j++)
        {
            
            cout<<k++;
        }
        cout<<"\n";
    }
    
    return 0;
}
