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
    int l,w,h;
    while(T--){
        cin>>l>>w>>h;
        cout << "Case " << ++i << ": ";
        if(l<=20 &&h<=20&&w<=20)
        {
            cout<<"good";
        }
        else{
            cout<<"bad";
        }
        cout<<endl;
    }
    return 0;
}