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
    cin>>T;
    while(T--)
    {
        long long  s,a , b,c;
        cin>>s>>a>>b>>c;
        long long d = (s/(a*c));
        long long e = (s%(a*c));
        cout << d*a +d*b +e/c<<endl;
    }
    return 0;
}
