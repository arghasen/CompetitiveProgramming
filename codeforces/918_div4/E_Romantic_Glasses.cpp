#include <bits/stdc++.h>
using namespace std;
#define F(i, L, R) for (int i = L; i < R; i++) // next four are for "for loops"
#define FE(i, L, R) for (int i = L; i <= R; i++)
#define FF(i, L, R) for (int i = L; i > R; i--)
#define FFE(i, L, R) for (int i = L; i >= R; i--)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        while (n--)
        {
            int x;
            cin >> x;
            a[n] = x;
        }
        long long left = 0, right = 0;
        bool flag = false;
        map<long long, long long> prefixSumCount;
        prefixSumCount[0] = 1;
        F(i, 0, a.size())
        {
            if (i % 2 == 0)
            {
                left += a[i];
            }
            else
            {
                left -= a[i];
            }
            if (prefixSumCount[left])
            {
                flag = true;
                break;
            }
            prefixSumCount[left]++;
        }
        flag ? cout << "YES\n" : cout << "NO\n";
    }
}