#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;
    switch(n)
    {
    case 1:
        cout<< "monday";
        break;
    case 2:
        cout<<"tusday";
        break;
    case 3 :
        cout<<"wesnday";
        break;
    case 4:    
        cout<<"friday";
        break;
    case 5:    
        cout<<"sat";
        break;
    case 6:    
        cout<<"default value";
        break;
    }
}
