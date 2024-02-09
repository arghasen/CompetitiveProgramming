#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        for (int i = 0; i < 3; i++)
        {
            cin >> s;
            bitset<3> found;
            for (int j = 0; j < 3; j++)
            {
                switch (s[j])
                {
                case 'A':
                case 'B':
                case 'C':
                    found.set(s[j] - 'A');
                    break;
                }
            }
            if (found.count() == 2)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (!found[j])
                    {
                        cout << (char)('A' + j) << endl;
                        break;
                    }
                }
            }
        }
    }
    return 0;
}