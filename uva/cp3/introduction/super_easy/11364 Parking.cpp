#include <bits/stdc++.h>
using namespace std;


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); // redirects standard input
    freopen("output.txt", "w", stdout); // redirects standard output
#endif
    int64_t T, S,a;
    cin>>T;
    while(T--)
    {
        cin>>S;
        vector<int> stores;
        while(S--)
        {
            cin>>a;
            stores.push_back(a);
        }
        auto l = max_element(stores.begin(),stores.end());
        auto r = min_element(stores.begin(),stores.end());
        cout<<2*(*l-*r)<<endl;
    }
    return 0;
}