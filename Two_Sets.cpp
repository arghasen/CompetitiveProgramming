#include <bits/stdc++.h>
using namespace std;
#define F(i, L, R) for (int i = L; i < R; i++) // next four are for "for loops"
#define FE(i, L, R) for (int i = L; i <= R; i++)
#define FF(i, L, R) for (int i = L; i > R; i--)
#define FFE(i, L, R) for (int i = L; i >= R; i--)
// #define F first
// #define S second
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

    solve();
    return 0;
}
vector<int> res;
void solve()
{
    int n;
    cin >> n;
    if (n % 4 == 0 or n % 4 == 3)
    {
        cout << "YES" << endl;
        ll sum = ((ll)n * ((ll)n + 1)) / 4;

        int i = 1;
        bool flag = false;
        int sz = 0;
        if (sum % n == 0)
        {
            res.push_back(n);
            sz++;
            // cout<<n<<" ";
            sum -= n;
        }
        else
        {
            res.push_back(n);
            res.push_back(1);
            // cout<<n<<" 1 ";
            sz += 2;
            flag = true;
            sum -= (n + 1);
        }
        int j = (flag) ? 1 : 0;
        while (sum != 0)
        {
            //  cout << sum << endl;
            res.push_back(i + j);
            res.push_back(n - i);
            // cout<<i+j << " "<<n-i << " ";
            sz += 2;
            sum -= n + j;
            i++;
        }
        // i--;
        cout << res.size() << endl;
        for (auto x : res)
        {
            cout << x << " ";
        }
        cout << endl;
        cout << n - sz << endl;
        // cout << i + j;
        F(k, 0, n - res.size())
        {
            cout << i + j + k << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
