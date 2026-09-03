#include<iostream>
using namespace std;
int main()
{ int fibo(int x)
{
    if(x<=1)
    {
        return x;
    }
    else
    {
        return fibo(x-1)+fibo(x-2);
    }

}}
int range(int n , int i=1)
{
    if(i<=n)
    {
        cout<<fibo(i -1)<<endl;
        range(n,i+1);

    }
}