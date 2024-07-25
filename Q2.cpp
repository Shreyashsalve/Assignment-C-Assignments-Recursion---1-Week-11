#include<iostream>
using namespace std;
void sum1toN(int sum,int n){
    if(n%2==0){
        sum1toN(sum+n-1,n-2);
    }
    else{
        if (n==sum)
        {
            cout<<sum;
            return;
        }
        sum1toN(sum+n,n-1);    
    }
}
int main()
{
    int a,b,sum;
    cout<<"enter the first number: ";
    cin>>a;
    cout<<"enter the last number: ";
    cin>>b;
    cout<<"The sum of odd digits from "<<a<<" to "<<b<<" is: ";
    sum1toN(a,b);
}