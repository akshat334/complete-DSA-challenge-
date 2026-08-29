// wap to demonstrate heraricalchical inheritance
#include<iostream>
using namespace std;    
int main()
{
    class A
    {
        public:
        void fun1(){
            cout<<"I m fun1 from a class\n";
        }
    
    
    };
    class B:public A
    {
        public:
        void fun2(){
            cout<<"I m fun2 from b class\n";
        }
}; 
    class C:public A
    {
        public:
        void fun3()
        {
            cout<<"I m fun3 from c class\n";
        }
    };
    B b;
    C c;
    b.fun1();
    b.fun2();
    c.fun1();
    c.fun3();
    return 0;
} 