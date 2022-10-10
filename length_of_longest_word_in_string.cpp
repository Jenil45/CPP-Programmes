// length of biggest word in a sentence
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;

    int i=0;
    int currlength = 0;
    int maxlength = 0;

    while (i<n)
    {
        if (arr[i] == ' '  || arr[i] == '\0')
        {
            if (currlength > maxlength)
            {
                 maxlength = currlength;               
            }
            currlength = 0;
        }

        else
        {
            currlength++ ;
        }

        if (arr[i] == '\0')
        {
            break;
        }
        
        i++;  
    }

    cout<< maxlength << endl;
    return 0;   
}
