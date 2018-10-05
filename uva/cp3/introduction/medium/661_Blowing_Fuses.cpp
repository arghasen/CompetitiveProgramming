#include <bits/stdc++.h>
using namespace std;
#define F(i, L, R) for (int i = L; i < R; i++) //next four are for "for loops"
#define FE(i, L, R) for (int i = L; i <= R; i++)
#define FF(i, L, R) for (int i = L; i > R; i--)
#define FFE(i, L, R) for (int i = L; i >= R; i--)

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);   // redirects standard input
    freopen("output.txt", "w", stdout); // redirects standard output
#endif
    int n, m, c;

    bool flag = true;
    int t = 0;
    while (cin >> n >> m >> c)
    {

        if (n == 0)
            break;

        t++;
        vector<bool> dev(n, false);
        vector<int> amp(n, false);
        F(i, 0, n)
        {
            cin >> amp[i];
        }
        int op;
        int usage = 0, maxusage = 0;
        F(i, 0, m)
        {
            cin >> op;
            dev[op - 1] = !dev[op - 1];
            if (dev[op - 1])
                usage += amp[op - 1];
            else
                usage -= amp[op - 1];
            // cout<<usage<<endl;
            maxusage = max(usage, maxusage);
        }
        cout << "Sequence " << t << endl;
        if (maxusage > c)
        {

            cout << "Fuse was blown." << endl;
        }
        else
        {
            cout << "Fuse was not blown." << endl;
            cout << "Maximal power consumption was " << maxusage << " amperes." << endl;
        }
        cout << endl;
    }
    return 0;
}