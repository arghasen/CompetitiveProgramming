#include<iostream>
using namespace std;
int main()
{
    int a =5;
    int *p = &a;
    cout<<a<<endl;
    cout<<*p<<endl;
    cout<<&a<<endl;
    cout<<&p<<endl;
    cout<<p<<endl;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(p)<<endl;
}