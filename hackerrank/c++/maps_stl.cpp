#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int n;
    cin>>n;
    int command;
    string name;
    int marks;
    unordered_map<string,int> m;
    while(n--)
    {
        cin>>command>>name;
        if(command==1)
        {
            cin>>marks;
            m[name]+=marks;    
        }
        if(command==2)
            m.erase(name);
        if(command==3)
        {
            auto it = m.find(name);
            if(it== m.end())
                cout<<0;
            else
                cout<<it->second;
            cout<<endl;
        }
    }
    return 0;
}
