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
    int H, U, D, F;
    while (cin >> H >> U >> D >> F)
    {
        if (H == 0)
            break;
        int day = 0;
        float cur = 0;
        float L = U * ((float)F / 100.0);
        while (true)
        {
            float today = (U - L * day);
            cur += (today > 0) ? (today) : 0;
            if (cur > H)
            {
                cout << "success on day " << day + 1 << endl;
                break;
            }
            cur -= D;
            if (cur < 0)
            {
                cout << "failure on day " << day + 1 << endl;
                break;
            }
            day++;
        }
    }
    return 0;
}