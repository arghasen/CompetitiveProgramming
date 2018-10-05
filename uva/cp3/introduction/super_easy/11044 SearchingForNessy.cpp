#include <bits/stdc++.h>
using namespace std;


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); // redirects standard input
    freopen("output.txt", "w", stdout); // redirects standard output
#endif
    int T, a,b;
    cin>>T;
    while(T--)
    {
        cin>>a>>b;
        cout<<(a/3)*(b/3)<<endl;
    }
    return 0;
}