#include <bits/stdc++.h>
using namespace std;
#define F(i, L, R) for (int i = L; i < R; i++) // next four are for "for loops"
#define FE(i, L, R) for (int i = L; i <= R; i++)
#define FF(i, L, R) for (int i = L; i > R; i--)
#define FFE(i, L, R) for (int i = L; i >= R; i--)

int main()
{
    set<char> vowels = {'a', 'e'};
    set<char> consonants = {'b', 'c', 'd'};
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        string s;
        cin >> n >> s;
        string currentFormat;
        string ans;
        FFE(i, n - 1, 0)
        {
            if (vowels.find(s[i]) != vowels.end())
            {
                currentFormat += "V";
            }
            else if (consonants.find(s[i]) != consonants.end())
            {
                currentFormat += "C";
            }
            ans += s[i];
            if (i != 0 && (currentFormat == "VC" || currentFormat == "CVC"))
            {
                ans += ".";
                currentFormat = "";
            }
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }
    return 0;
}