#include<iostream>
using namespace std;
//RECURSION
//Here we have to write a programme on first and last occur number of repeating element in an array

int firstoccur(int arr[] , int n , int i , int key)
{
    if (i == n)
    {
        return -1;
    }

    if (arr[i] == key)
    {
        return i;                                           
    }

    return firstoccur(arr , n , i+1 , key);
     
}

int lastoccur(int arr[] , int n , int i , int key)                          //find lastoccurence by end of array
{
    if (i == n)
    {
        return -1;
    }

    if (arr[i] == key)
    {
        return i;                                           
    }

    return firstoccur(arr , n , i-1 , key);
     
}

int lastoccur1(int arr[] , int n , int i , int key)                         //find lastoccursence by starting of an array
{
    if (i == n)
    {
        return -1;
    }

    int restarray = lastoccur(arr , n , i+1 , key);
    if (restarray != -1)
    {
        return restarray;
    }
    
    if (arr[i] == key)
    {
        return i;
    }

    return -1;
     
}


int main()
{
    int arr[] = {4 , 2 , 1 , 2 , 5 , 2 , 7};
    cout<<firstoccur(arr , 7 , 0 , 2)<<endl;
    cout<<lastoccur1(arr , 7 , 0 , 2)<<endl;
    cout<<lastoccur(arr , 7 , 6 , 2);
    return 0;
}
