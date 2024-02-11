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
    int n, m;
    cin >> n >> m;
    multiset<int, greater<int>> t;
    vi p(m);
    int tp;
    F(i, 0, n)
    {
        cin >> tp;
        t.insert(tp);
    }
    F(i, 0, m)
    {
        cin >> p[i];
    }
    int j = 0;

    while (j < m)
    {
        auto it = t.lower_bound(p[j]);
        if (it != t.end())
        {
            cout << *it << endl;
            t.erase(it);
        }
        else
        {

            cout << -1 << endl;
        }
        j++;
    }
}
