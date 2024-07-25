// Print an increasing-decreasing sequence using recursion
// Example:
// I" n = 5, the output should be:
// 1 2 3 4 5 4 3 2 1
#include<iostream>
using namespace std;
void printNto1(int n)
{
    int nu=n;
    if (n==0) return;//base case
    cout<<n<<endl;
    printNto1(n-1);
    
}
void print1ToN(int i,int n)
{
    if (i<=n)
    {
    cout<<i<<endl;
    print1ToN(i+1,n);
    }
    else return;
}
void printSequence(int n)
{
    print1ToN(1,n);
    printNto1(n-1);
    cout<<endl;

}
int main()
{
    int n;
    cout<<"\n enter n: ";
    cin>>n;
    printSequence(n);
}