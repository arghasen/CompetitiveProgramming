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
    solve();
    return 0;
}

void solve()
{
    string s, t;
    cin >> s >> t;
    F(i, 0, s.size())
    {
        if (tolower(s[i]) < tolower(t[i]))
        {
            cout << "-1" << endl;
            return;
        }
        else if (tolower(s[i]) > tolower(t[i]))
        {
            cout << "1" << endl;
            return;
        }
    }
    cout << "0" << endl;
}
