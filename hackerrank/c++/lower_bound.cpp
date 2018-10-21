#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,k;
    cin>>n;
    vector<int> vec;
    int a;
    while(n--)
    {
        cin>>a;
        vec.push_back(a);
    }
    cin>>k;
    int q;
    while(k--)
    {
        cin>>q;
        auto l = lower_bound(vec.begin(), vec.end(),q);
        if(*l ==q)
            cout<<"Yes";
        else
            cout<<"No";
        cout<<" "<<l-vec.begin()+1<<endl;
    }
       
    return 0;
}
