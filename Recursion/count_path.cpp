#include<iostream>
using namespace std;
//RECURSION
//We have given starting and ending point we have to find number of paths by throw dice how many way can we go from start to end

int countpath(int start , int end )
{
    if (start == end)
    {
        return 1;                                                      //only one way can we get no move
    }

    if (start > end)
    {
        return 0;                                                      //no forward move
    }
    
    int count = 0;
    
    for (int i = 1; i <= 6; i++)
    {
        count = count + countpath(start+i , end);                   //dice throw that steps move
    }
    
    return count;
    
}
int main()
{
    cout<<countpath(2 , 8);
    return 0;
}
