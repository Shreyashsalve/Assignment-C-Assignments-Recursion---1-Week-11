#include<iostream>
using namespace std;
int isPowerofTwo(int n)
{
    if (n==1) return 1;
    if(n==0 || n%2!=0) return 0;
    isPowerofTwo(n/2);
}
int main()
{
    cout<<"ENTER: ";
    int n;
    cin>>n;
    if(isPowerofTwo(n)==1)
    {
        cout<<"\n TRUE!";
    }
    else cout<<"\n FALSE";
}

//NOTE: Power of anything can be done with this same logic