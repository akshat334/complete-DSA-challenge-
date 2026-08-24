#include<iostream>
using namespace std;
int main()
{
    int a , b,n;
    
cout<<"enter the frist number :";
cin>>a;
cout<<"enter the second numder: ";
cin>> b ;

cout<<"enter the value of n";
cin>>n;


switch(n)
{
case 1:
    cout<<"a+b="<<a+b;
    break;
case 2:
    cout<<"a-b="<<a-b;
    break;
case 3:
    cout<<"a*b="<<a*b;
    break;
case 4:
    cout<<"a/b="<<a/b;
    break;
case 5:
     cout<< "default vale";
     break;

}

}