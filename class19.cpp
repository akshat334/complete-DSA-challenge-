#include<iostream>
using namespace std;
int main ()
{
    int arr[5],sum=0; ;
    for(int i=0; i<5; i++)
    {
        cout<<"enter the value of arr";
        cin>>arr[i];
    }
    for(int j=0; j<5; j++)
    {
        cout<<arr[j]<<endl;
    }
    cout<<"the array sum is: "<<sum<<endl;

    return 0;
}