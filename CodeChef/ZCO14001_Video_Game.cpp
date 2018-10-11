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
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    vector v1(n1);
    vector v2(n2);
    vector v3(n3);
    F(i,0,n1)
    {
        cin>>v1[i];
    }
    F(i,0,n2)
    {
        cin>>v2[i];
    }
    F(i,0,n3)
    {
        cin>>v3[i];
    }
    int i=0,j=0,k =0
    while(i!=n1 && j!=n2 && k!=n3)
    return 0;
}