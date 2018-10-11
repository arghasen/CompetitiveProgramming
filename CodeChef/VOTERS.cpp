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
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int a;
    map<int, int> counts;
    F(i, 0, n1 + n2 + n3)
    {
        cin >> a;
        counts[a] += 1;
    }
    vector<int> results;
    for (auto i = counts.begin(); i != counts.end(); i++) 
        if (i->second >= 2)
            results.push_back(i->first);
    cout << results.size() << endl;
    copy(results.begin(), results.end(), ostream_iterator<int>(cout, "\n"));
    return 0;
}
