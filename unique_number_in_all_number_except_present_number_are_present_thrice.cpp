#include<iostream>
using namespace std;
//Write an programme to find unique number in an array where all number except one number are present thrice

int getbit(int n , int position)
{
    return ( (n & (1 << position)) != 0);
}

int setbit(int n , int position)
{
    return (n | (1 << position));
}

int unique(int arr[] , int n)
{
    int result = 0;
    for (int i = 0; i < 64; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j ++)
        {
            if (getbit(arr[j] , i))                          // check that what is the positon of 1 in arr[j]
            {
                sum++;
            }
            
        }

        if ((sum % 3) != 0)
        {
            result = setbit(result , i);                     //set unique the unique number at iyh position in 64 bit array
        }
            
    }

    return result;    
}
int main()
{
    int arr[10] = {1 , 3 , 2 , 3 , 4 , 2 , 1 , 1 , 3 ,2 };
    cout<<unique(arr , 10)<<endl;
    return 0;
}
