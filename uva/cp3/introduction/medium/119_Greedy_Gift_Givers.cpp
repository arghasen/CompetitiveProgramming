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
    bool flag = true;
    while (cin >> N)
    {
        // UGLY hack for presentation error, we need a newline between outputs but not first and last.
        if (flag)
        {
            flag = false;
        }
        else
            cout << endl;
        vector<string> names;
        unordered_map<string, int> worth;
        string name;
        F(i, 0, N)
        {
            cin >> name;
            names.push_back(name);
            worth.insert({name, 0});
        }
        string gifted;
        int cost, num;
        F(i, 0, N)
        {
            cin >> name >> cost >> num;
            if (num == 0)
                continue;
            auto dv = div(cost, num);
            worth[name] += (-cost + dv.rem);
            F(j, 0, num)
            {
                cin >> gifted;
                worth[gifted] += dv.quot;
            }
        }
        F(i, 0, N)
        {
            cout << names[i] << " " << worth[names[i]] << endl;
        }
    }
    return 0;
}