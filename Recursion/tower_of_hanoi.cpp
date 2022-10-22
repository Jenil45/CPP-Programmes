#include<iostream>
#include<string>
using namespace std;
//RECURSION
//TOWER OF HANOI PROBLEM

void towerofhanoi(int n , char source , char destination , char helper)
{
    if (n == 0)
    {
        return ;
    }

    towerofhanoi(n-1 , source , helper , destination);
    cout<<"From "<<source<<" TO "<<destination<<endl;
    towerofhanoi(n-1 , helper , destination , source);
    
}
int main()
{
    towerofhanoi(4 , 'A' , 'C' , 'B'); 
    return 0;
}
