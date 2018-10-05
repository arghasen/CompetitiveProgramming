#include <bits/stdc++.h>
using namespace std;


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); // redirects standard input
    freopen("output.txt", "w", stdout); // redirects standard output
#endif
    int T,i=0;
    cin>>T;
    int a,b,c;
   // cout<<T;
    while(T--){
        cin>>a>>b>>c;
        vector<int> s{a,b,c};
        sort(s.begin(),s.end());
        cout<<"Case "<<++i<<": "<<s[1]<<endl;
    }
    return 0;
}