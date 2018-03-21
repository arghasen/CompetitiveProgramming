#include <bits/stdc++.h>
using namespace std;


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); // redirects standard input
    freopen("output.txt", "w", stdout); // redirects standard output
#endif
    string line;
    bool openQuote = true;
    
    while (getline(cin, line))
    {
        cout<<line;        
        cout << '\n';
    }
    return 0;
}