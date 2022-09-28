#include<iostream>                       // use of pre incrimenter (++i) and post incrimenter
using namespace std;

int main()
{
    int a,b;

    a=10;
    // pre incrimenter
    b = ++a;                                    // first value incriment of a then it go to b
    cout<<a<<"and"<<b;    

    cout<<"\n"<<endl;
    
    // post incrimenter
    b = a++;                                    // first a go to be and then incriment of a
    cout<<a<<"and"<<b;          

    return 0;
}
