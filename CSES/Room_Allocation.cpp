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
    int n;
    cin >> n;
    vector<vector<int>> cust(n, vector<int>(3, 0));

    F(i, 0, n)
    {
        cin >> cust[i][0] >> cust[i][1];
        cust[i][2] = i;
    }
    sort(cust.begin(), cust.end());
    priority_queue<pii> room;
    size_t roomNo = 0;
    vi ans(n);
    F(i, 0, n)
    {
        // cout << cust[i].first << " " << cust[i].second << endl;
        if (!room.empty() && -room.top().first < cust[i][0])
        {
            // cout << room.top() << " " << cust[i].first << endl;
            room.push({-cust[i][1], room.top().second});
            ans[cust[i][2]] = room.top().second;
            room.pop();
        }
        else
        {
            room.push({-cust[i][1], room.size() + 1});
            roomNo = max(roomNo, room.size());
            ans[cust[i][2]] = room.size();
        }
    }
    cout << roomNo << endl;
    F(i, 0, n)
    {
        cout << ans[i] << " ";
    }
}
