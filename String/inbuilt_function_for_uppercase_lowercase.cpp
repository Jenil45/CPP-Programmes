#include<iostream>
#include<string>
#include<algorithm>
//In built function to convert uppercase and lowercase
using namespace std;

int main()
{
    string s = "AghvfBklmN";

    //To upper case
    transform(s.begin() , s.end() , s.begin() , ::toupper);
    cout<<s<<endl;

    //To lower case
    transform(s.begin() , s.end() , s.begin() , ::towlower);
    cout<<s<<endl;
    
    return 0;
}
