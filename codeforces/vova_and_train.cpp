#include <bits/stdc++.h>
using namespace std;
#define F(i,L,R) for (int i = L; i < R; i++) //next four are for "for loops"
#define FE(i,L,R) for (int i = L; i <= R; i++)
#define FF(i,L,R) for (int i = L; i > R; i--)
#define FFE(i,L,R) for (int i = L; i >= R; i--)

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); // redirects standard input
    freopen("output.txt", "w", stdout); // redirects standard output
#endif
    int T;
    int l,v,s,e;
    cin>>T;
    while(T--)
    {
        cin>>l>>v>>s>>e;
        int numLanterns =l/v;
        int cantSee = (e)/v-(s-1)/v;
        cout<<numLanterns-cantSee<<endl;
    }    
    return 0;
}
