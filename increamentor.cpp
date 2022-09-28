#include<iostream>
using namespace std;

int main()
{
    int i;
    cin>>i;

    i = i++ + ++i;                   // Here first i++ means i already declare then  due to i++ increse value of i then that increase value use for ++i so for i=4, 4+6=10
    cout<<i;

    int a=1;
    a = a++ - --a + a-- - --a;
     // 1      1    1      0  -1  = 2
     cout<<a;
    return 0;
}

