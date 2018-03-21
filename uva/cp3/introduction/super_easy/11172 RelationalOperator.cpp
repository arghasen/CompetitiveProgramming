#include <bits/stdc++.h>
using namespace std;


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); // redirects standard input
    freopen("output.txt", "w", stdout); // redirects standard output
#endif
    int64_t T, a,b;
    cin>>T;
    while(T--)
    {
        cin>>a>>b;
        if(a>b)
            cout<<">";
        else if(a<b)
            cout<<"<";
        else
            cout<<"=";
        cout<<endl;
    }
    return 0;
}