#include <bits/stdc++.h>
using namespace std;
#define F(i, L, R) for (int i = L; i < R; i++) // next four are for "for loops"
#define FE(i, L, R) for (int i = L; i <= R; i++)
#define FF(i, L, R) for (int i = L; i > R; i--)
#define FFE(i, L, R) for (int i = L; i >= R; i--)
#define F first
#define S second
#define PB push_back
#define MP make_pair

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
    if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION";
    }
    else
    {

        for (int i = n - 1; i >= 1; i -= 2)
        {
            cout << i << " ";
        }
        for (int i = n; i >= 1; i -= 2)
        {
            cout << i << " ";
        }
    }
}
