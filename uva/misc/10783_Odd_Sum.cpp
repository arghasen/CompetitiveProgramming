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
    int i=0;
    while(T--)
    {
        int a,b;
        cin>>a>>b;
        cout<<"Case "<< ++i<<": "<< pow((b+1)/2,2)-pow((a)/2,2)<<endl;
    }
    return 0;
}