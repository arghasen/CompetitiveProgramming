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
    while(T--)
    {
        int farmers;
        cin>> farmers;
        int land,animals,eco;
        long cost=0;
        for(int i=0;i<farmers;i++)
        {
            cin>>land>>animals>>eco;
            cost += land*eco;
        }
        cout<<cost<<endl;
    }
    return 0;
}