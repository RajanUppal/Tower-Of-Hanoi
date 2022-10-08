#include<iostream>
using namespace std;

void towerofhanoi(int n, char beg, char aux, char end)  
{
    if(n>=1) // termination condition
    {
        towerofhanoi(n-1,beg,end,aux);  // moving disk from beginning to auxiliary
        cout<<beg<<" to "<<end<<endl;
        towerofhanoi(n-1,aux,beg,end);  // moving disk from auxiliary to end
    }
}

int main()
{
    int n;
    cout<<"Enter the number of Disks: ";
    cin>>n;
    towerofhanoi(n,'a','b','c');
    return 0;
}
