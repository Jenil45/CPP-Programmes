#include<iostream>
#include<algorithm>
#include<string>
//make biggest number from numeric string
using namespace std;

int main()
{
    string s = "7445131654641";

    //Biggest number from this string

    sort(s.begin() , s.end() , greater<int>());
    cout<< s <<endl;

    return 0;
}
