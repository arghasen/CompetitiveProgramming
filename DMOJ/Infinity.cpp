#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); // redirects standard input
    freopen("output.txt", "w", stdout); // redirects standard output
#endif
    cin>>hex>>a;
    cin>>hex>>b;
    int inf = 0x3F3F3F3F;
    
    // cout<<inf<<endl;
    // cout<<a<<" "<<b;
    if(a+b>inf )
    {   
        cout<<"Yes"<<endl;
    }
    else
        cout<<"No"<<endl;
    return 0;
}