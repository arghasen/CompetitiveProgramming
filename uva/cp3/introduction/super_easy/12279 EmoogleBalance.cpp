#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);   // redirects standard input
    freopen("output.txt", "w", stdout); // redirects standard output
#endif
    int T, e,i=0;
    while (1)
    {
        cin >> T;
        if (T == 0)
            break;
        auto bal = 0;
        while (T--)
        {

            cin >> e;
            if (e != 0)
                ++bal;
            else
                --bal;
        }
        cout << "Case " << ++i << ": " << bal<<endl;
    }
    return 0;
}