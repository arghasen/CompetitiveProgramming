#include <bits/stdc++.h>
using namespace std;
#define F(i, L, R) for (int i = L; i < R; i++) // next four are for "for loops"
#define FE(i, L, R) for (int i = L; i <= R; i++)
#define FF(i, L, R) for (int i = L; i > R; i--)
#define FFE(i, L, R) for (int i = L; i >= R; i--)

using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vll = vector<ll>;
void solve();
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);   // redirects standard input
    freopen("output.txt", "w", stdout); // redirects standard output
#endif
    // int T;
    // cin >> T;
    // while (T--)
    // {
    //     solve();
    // }
    solve();
    return 0;
}

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vi h(n);
    vi u(m);
    F(i, 0, n)
    {
        cin >> h[i];
    }
    F(i, 0, m)
    {
        cin >> u[i];
    }
    sort(h.begin(), h.end());
    sort(u.begin(), u.end());

    int i = 0;
    int j = 0;
    int ans = 0;
    while (i < n && j < m)
    {
        if (abs(h[i] - u[j]) <= k)
        {
            ans++;
            i++;
            j++;
        }
        else if (h[i] - u[j] < -k)
        {
            i++;
        }
        else if (h[i] - u[j] > k)
        {
            j++;
        }
    }
    cout << ans << endl;
}
