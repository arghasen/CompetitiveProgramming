#include <bits/stdc++.h>
using namespace std;
#define F(i, L, R) for (int i = L; i < R; i++) //next four are for "for loops"
#define FE(i, L, R) for (int i = L; i <= R; i++)
#define FF(i, L, R) for (int i = L; i > R; i--)
#define FFE(i, L, R) for (int i = L; i >= R; i--)

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);   // redirects standard input
    freopen("output.txt", "w", stdout); // redirects standard output
#endif
    int N;

    while (cin >> N)
    {
        int a, b;
        cin >> a;
        bitset<3000> check;

        F(i, 0, N - 1)
        {
            cin >> b;
            if (a == b || abs(a - b) > N - 1)
                continue;
            check.set(abs(a - b));
            a = b;
        }
        int k = check.count();

        if (k == N - 1)
            cout << "Jolly\n";
        else
            cout << "Not jolly\n";
    }
    return 0;
}