#include<iostream>
using namespace std; 
//Check palindrome
//palindrome means a reverse of that word is eaual to original

int main()
{ 
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;

    bool check = true;

    for(int i=0 ; i<n ; i++)
    {
        if (arr[i] != arr[n-1-i])                     //here we check each of a word
        {
            check = false;
            break;
        }
    }  

    if (check == true)
    {
        cout<<"Word is a palindrome"<<endl;
    }
    
    else
    {
        cout<<"Word is not a palindrome"<<endl;
    }
    
    return 0;
}
