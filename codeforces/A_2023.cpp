#include <bits/stdc++.h>
using namespace std;
#define F(i, L, R) for (int i = L; i < R; i++) // next four are for "for loops"
#define FE(i, L, R) for (int i = L; i <= R; i++)
#define FF(i, L, R) for (int i = L; i > R; i--)
#define FFE(i, L, R) for (int i = L; i >= R; i--)

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    long long x = 1;
    F(i, 0, n)
    {
        cin >> a[i];
        x *= a[i];
    }

    if (2023 % x == 0)
    {
        cout << "YES" << endl;
        F(i, 0, k - 1)
        {
            cout << "1 ";
        }
        cout << 2023 / x << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);   // redirects standard input
    freopen("output.txt", "w", stdout); // redirects standard output
#endif
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
