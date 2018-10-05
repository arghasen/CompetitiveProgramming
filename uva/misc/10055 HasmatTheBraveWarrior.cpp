#include <bits/stdc++.h>
using namespace std;


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); // redirects standard input
    freopen("output.txt", "w", stdout); // redirects standard output
#endif
    int64_t a,b;
    while(cin>>a>>b){
        cout<<abs(a-b)<<endl;
    }
    return 0;
}