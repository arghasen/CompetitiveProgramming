#include <bits/stdc++.h>
using namespace std;


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); // redirects standard input
    freopen("output.txt", "w", stdout); // redirects standard output
#endif
    int T;
    cin>>T;
    string s;
    while(T--){
        cin>>s;
        if(s.length()==5){cout<<3<<endl;}
        else{
            int cnt = 0;
 
            if ( s[0] == 'o' ) cnt++;
            if ( s[1] == 'n' ) cnt++;
            if ( s[2] == 'e' ) cnt++;
 
            if ( cnt >= 2 ){cout<<1<<endl;}
            else cout<<2<<endl;
        }
    }
    return 0;
}