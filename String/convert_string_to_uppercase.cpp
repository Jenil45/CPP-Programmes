#include<iostream>
#include<string>
#include<algorithm>
//Convert whole string in uppercase
using namespace std;
//WKT differnce between lowercase letter and upercase letter is 32 ('a'-'A' = 32 )

int main()
{
    string str = "AgvfhjgBghfyD";

    //convert string in uppercase

    for (int i = 0; i < str.size(); i++)                     // str.size()  represent size of str
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] -32;
        }
        
    }
    cout<<str<<endl;
    
    //convert to lower case
    
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i]+32;
        }
        
    }
    cout<<str;    

    return 0;
}
