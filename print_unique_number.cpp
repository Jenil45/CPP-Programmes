#include<iostream>
using namespace std;
//All number are repeating except one number print that unique number

int uniquenumber(int arr[] , int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum^arr[i];
    }
    return xorsum;
}
int main()
{
    int arr[7] = {3 , 3 , 2 , 2 , 4 , 1 , 1};
    cout<< uniquenumber(arr , 7) <<endl;

    return 0;
}
