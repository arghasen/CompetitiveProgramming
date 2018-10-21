#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,q;
    cin>>n>>q;
    vector<vector<int>> store(n);
    int k;
    for(auto i =0; i<n;i++)
    {
        cin>>k;
        store[i]= vector<int>(k);
        for(int j =0; j<k;j++)
            cin>>store[i][j];
    }
    
    int a,b;
    for(auto i =0; i<q;i++)
    {
        cin>>a>>b;
        cout<<store[a][b]<<endl;
    }
    
    return 0;
}