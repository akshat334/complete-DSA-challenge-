// wap to add two numbers using function in c++
#include<iostream>
using namespace std;
int add(int a, int b)
{
    return a + b;
}
int main()
{
    int a, b;
    cout<<"enter the value of a and b";
    cin>>a>>b;
    cout<<"addition : "<<add(a, b);
    return 0;
}
    