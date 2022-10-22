#include<iostream>
#include<string>
using namespace std;
//RECURSION
//Replace pi with 3.14 in string using recursion

void replace(string s)
{
    if (s.length() == 0)
    {
        return;
    }

    if (s[0] == 'p' && s[1] == 'i' )
    {
        cout<<"3.14";                                         //When p and i is ther then it cout as 3.14
        replace(s.substr(2));                                 //We loss here two elemnt in cout 3.14 then we pass substring of lossing two elemnt
    }
    
    else
    {
        cout<<s[0];                              //Here first two elemnt didn't make a pi so we print first element
        replace(s.substr(1));                    //Here we loss one elemnt so substring of without first elemnt       
    }
    
    
}

int main()
{
    replace("pippphjhpihhhpi");
    return 0;
}
