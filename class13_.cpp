//wap to demonstraten types of parameter in function
#include<iostream>
using namespace std;

int change(int &a)
{
    a = 20; 
    
}
int main()
{
    int a = 10;
    cout<<" hello";
    change(a);
    cout<<(a);
    return 0;
}

