#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int a,b;
    set<int> s;
    while(n--)
    {
        cin>>a>>b;
        if(a==1)
            s.insert(b);
        if(a==2)
            s.erase(b);
        if(a==3)
        {
            auto it = s.find(b);
            if(it==s.end())
                cout<<"No";
            else
                cout<<"Yes";
            cout<<endl;    
        }
        
    }
    return 0;
}