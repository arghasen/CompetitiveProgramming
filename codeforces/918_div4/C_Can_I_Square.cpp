#include <bits/stdc++.h>
using namespace std;
#define F(i, L, R) for (int i = L; i < R; i++) // next four are for "for loops"
#define FE(i, L, R) for (int i = L; i <= R; i++)
#define FF(i, L, R) for (int i = L; i > R; i--)
#define FFE(i, L, R) for (int i = L; i >= R; i--)

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        long long sum = 0, a;
        while (n--)
        {
            cin >> a;
            sum += a;
        }
        long long d = sqrt(sum);
        (d * d == sum) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}
