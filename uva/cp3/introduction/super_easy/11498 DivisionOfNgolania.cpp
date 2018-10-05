#include <bits/stdc++.h>
using namespace std;


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); // redirects standard input
    freopen("output.txt", "w", stdout); // redirects standard output
#endif
    int64_t K,N,M;
    while(1)
    {
        cin>>K;
        //cout<<K;
        if(K==0)
            break;
        cin>>N>>M;
        while(K--)
        {
            int n,m;
            cin>>n>>m;
            if(n==N ||m==M) 
                cout<<"divisa";
            else
            { 
                if(m>M)
                    cout<<"N";
                else 
                    cout<<"S";
                if(n>N)
                    cout<<"E";
                else
                    cout<<"O";
            }
            cout<<endl;
        }

    }
    return 0;
}