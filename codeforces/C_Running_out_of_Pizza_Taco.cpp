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
    int n;
    cin >> n;
    int p, t, s;
    cin >> p >> t >> s;

    int maxSauce = s / 2;
    int maxSaucePeople = min(maxSauce, n);
    int remP = p - 2 * n - maxSaucePeople;
    int remT = t - 2 * n - maxSaucePeople;
    if (remP <= 0 || remT <= 0)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
}
