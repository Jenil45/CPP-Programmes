// Given a string str containing alphanumeric characters. The task is to calculate the sum of all the numbers present in the string.

#include<bits/stdc++.h>
#include<string>
using namespace std;

int findsum(string s)
{
    int n = 0;
    int ans = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]>='0' && s[i]<'9')
        {
            n = n*10 + (s[i] - '0');
        }

        else
        {
            ans = ans+n;
            n=0;
        }
        
    }

    return ans+n;
    
}

int main()
{
    string s;
    
    getline(cin , s);
    cout<< findsum(s);
    return 0;
}
