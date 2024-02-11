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
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);   // redirects standard input
    //     freopen("output.txt", "w", stdout); // redirects standard output
    // #endif

    solve();
    return 0;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vi p(n);
    ll maxP = 0;
    ll totalSlices = 0;
    F(i, 0, n)
    {
        cin >> p[i];
        maxP = max(maxP, (ll)p[i]);
        totalSlices += p[i];
    }
    ll left = maxP;
    ll right = totalSlices;
    while (left < right)
    {
        ll mid = (right - left) / 2 + left;
        ll slicesLeft = mid;
        int pizzaLeft = k;
        F(i, 0, n)
        {
            if (slicesLeft < p[i])
            {
                pizzaLeft--;
                slicesLeft = mid - p[i];
            }
            else
            {
                slicesLeft -= p[i];
            }
        }
        if (pizzaLeft <= 0)
        {
            left = mid + 1;
        }
        else
        {
            right = mid;
        }
        // cout << left << " " << right << endl;
    }
    cout << left << endl;
}
