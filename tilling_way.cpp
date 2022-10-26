#include<iostream>
using namespace std;
//RECURSION
//Given 2*n board and tile of 2*1 , count number of ways that board is fully filled by tiles

int tilling(int n)
{
    if (n == 1) 
    {
     return 1;                                  //means only one column reamin which filled by 2*1 
    }

    if (n == 0)
    {
        return 0;                            //no column remain
    }
    
    return (tilling(n-1) + tilling(n-2));        //if we set tile vertical reamin column is n-1 and if it put horizontally remain colmun is n-2
}

int main()
{
   int rowofgivenboard = 2;                    //fixed..................................
   int col ;
   cin>>col;
   cout<<tilling(col)<<endl;
   return 0; 
}
