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
    F(t,0,T)
    {
        int N;
        cin>>N;
        int max_speed=INT_MIN, cur;
        F(i,0,N)
        {
            cin>>cur;
            max_speed= max(cur,max_speed);
        }
        cout<<"Case "<<t+1<<": "<< max_speed<<endl;
    }
    return 0;
}