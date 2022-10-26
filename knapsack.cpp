#include<iostream>
using namespace std;
//RECURSION
//Here we have to take value that our knapsack can effort weight w and value of elemnt that we steal is maximum

int knapsack(int  value[] , int wt[] , int n , int w)
{
    if (n==0 || w==0)
    {
        return 0;
    }

    if (wt[n-1] > w)
    {
        return knapsack(value , wt , n-1 , w-wt[n-1]);
    }
    
    return max((knapsack(value , wt , n-1 , w-wt[n-1]) + value[n-1]) , knapsack(value , wt , n-1 , w));
    //  //                 // things we include and add ther value //   //thing that not include //               
}
int main()
{
    int value[] = {100 , 250 , 200};
    int wt[] = {10 , 20 ,30};
    int w =50;
    cout<<knapsack(value , wt , 3 , w);
    return 0;
}
