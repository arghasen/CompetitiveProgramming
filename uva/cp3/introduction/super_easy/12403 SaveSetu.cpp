#include <bits/stdc++.h>
using namespace std;


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); // redirects standard input
    freopen("output.txt", "w", stdout); // redirects standard output
#endif
    int T,c;
    cin>>T;
    string s;
    long long int bal =0;
    while(T--){
        cin>>s;
        if(s=="donate"){
            cin>>c;
            bal+=c;
        }
        else{
            cout<<bal<<endl;
        }
    }
    return 0;
}
