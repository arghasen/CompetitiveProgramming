#include <bits/stdc++.h>
using namespace std;


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); // redirects standard input
    freopen("output.txt", "w", stdout); // redirects standard output
#endif

    int T,n;
    cin>>T;
    while(T--)
    {
        cin>>n;
        n = abs((((n * 63 + 7492) * 5 - 498)/10)%10);
        cout<<n<<endl;
    }
    return 0;
}