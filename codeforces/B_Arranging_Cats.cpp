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
    string s, t;
    cin >> s >> t;
    int extraS = 0, extraT = 0;
    F(i, 0, s.size())
    {

        if (s[i] == '1' && t[i] == '0')
        {
            extraS++;
        }
        else if (s[i] == '0' && t[i] == '1')
        {
            extraT++;
        }
    }
    cout << max(extraS, extraT) << endl;
}
