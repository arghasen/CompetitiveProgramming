#include <bits/stdc++.h>
using namespace std;
#define F(i, L, R) for (int i = L; i < R; i++) // next four are for "for loops"
#define FE(i, L, R) for (int i = L; i <= R; i++)
#define FF(i, L, R) for (int i = L; i > R; i--)
#define FFE(i, L, R) for (int i = L; i >= R; i--)

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> a;
        vector<int> dests;
        while (n--)
        {
            int x, y;
            cin >> x >> y;
            a.push_back({x, y});
            // dests.push_back(y);
        }
        // sort(dests.begin(), dests.end());
        int left = 0, right = 0;
        bool flag = false;
        long long ans = 0;
        F(i, 0, a.size())
        {
            F(j, i + 1, a.size())
            {
                if (a[i].first > a[j].first && a[i].second < a[j].second)
                {
                    ans++;
                }
                else if (a[i].first < a[j].first && a[i].second > a[j].second)
                {
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
}