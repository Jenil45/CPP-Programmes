#include<iostream>
using namespace std;
//Count how many 1 is there in n

int numberof1(int n)
{
    int count = 0;

    while(n != 0)
    {
        n = n & (n-1);
        count++;
    }

    return count;
}
int main()
{
    int n;
    cin>>n;
    cout<<numberof1(n)<<endl;
    return 0;
}
