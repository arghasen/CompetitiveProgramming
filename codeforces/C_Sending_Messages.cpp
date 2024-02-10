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
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}

void solve()
{
    int n;
    cin >> n;
    ll f, a, b;
    cin >> f >> a >> b;
    vi v(n);
    F(i, 0, n)
    {
        cin >> v[i];
    }
    int last = 0;
    F(i, 0, n)
    {
        auto on = (v[i] - last) * a;
        f -= (on < b) ? on : b;
        // cout << f << " " << (on < b) << endl;
        if (f <= 0)
        {
            cout << "NO" << endl;
            return;
        }
        last = v[i];
    }
    cout << "YES" << endl;
}