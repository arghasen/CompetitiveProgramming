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
    int n,m;
    cin>>n>>m;
    int m1=0, m2=0;
   if(m*2<n)
   {
      m1= n-m*2;
   }
    int e= 0;
    int i =0;
    while(e<m)
    {
        i++;
        e+=i;
    }
   cout<<m1<<" "<<n-(i+1)<<endl;
    return 0;
}
